#include <stdio.h>
#include <sys/time.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <x86intrin.h>

// Comment out for normal operation
//#define DEBUG 1

#define REF_SIZE 1000000 	// Size of reference genome
#define READ_SIZE 100		// Size of each read
#define NUM_READS 100		// Number of reads in read file
#define REF_LINE_SIZE 100	// Length of each line in file of reference genome

#ifdef DEBUG
#define NUM_RUNS 1 // Make it easier to debug
#else
#define NUM_RUNS 1 
#endif

// Direction type, EDGE means that entry is in 0th column, so we stop following
//typedef enum {UP, LEFT, DIAG, EDGE} direction;

char* genome_file = "long_reference.fasta"; 	// File where reference genome is stored
char* read_file = "long_sequences.fastq";		// File where reference reads are stored

struct {
	char score[REF_SIZE+1][READ_SIZE+1];
	unsigned int orig  [REF_SIZE+1][READ_SIZE+1];
} nw_matrix;									// The NW matrix, as struct-of-arrays instead of array-of-structs
char ref_genome[REF_SIZE+1];					// The reference genome
char reads[NUM_READS][READ_SIZE+1];				// The reads to be sequenced
unsigned int best_fits[NUM_RUNS][NUM_READS];	// The best fit index for each read


// Scoring system
#define GAP_PEN       -1
#define MISMATCH_PEN  -1
#define MATCH_SCORE    1


#ifdef __AVX__
typedef char v16sb __attribute__((vector_size(16)));

const v16sb v_match_score = {MATCH_SCORE, MATCH_SCORE, MATCH_SCORE, MATCH_SCORE,
                             MATCH_SCORE, MATCH_SCORE, MATCH_SCORE, MATCH_SCORE,
                             MATCH_SCORE, MATCH_SCORE, MATCH_SCORE, MATCH_SCORE,
                             MATCH_SCORE, MATCH_SCORE, MATCH_SCORE, MATCH_SCORE};
const v16sb v_gap_pen = {GAP_PEN, GAP_PEN, GAP_PEN, GAP_PEN,
                         GAP_PEN, GAP_PEN, GAP_PEN, GAP_PEN,
                         GAP_PEN, GAP_PEN, GAP_PEN, GAP_PEN,
                         GAP_PEN, GAP_PEN, GAP_PEN, GAP_PEN};
const v16sb v_mismatch_pen = {MISMATCH_PEN, MISMATCH_PEN, MISMATCH_PEN, MISMATCH_PEN,
                              MISMATCH_PEN, MISMATCH_PEN, MISMATCH_PEN, MISMATCH_PEN,
                              MISMATCH_PEN, MISMATCH_PEN, MISMATCH_PEN, MISMATCH_PEN,
                              MISMATCH_PEN, MISMATCH_PEN, MISMATCH_PEN, MISMATCH_PEN};
const v16sb v_dir_diag = {DIAG, DIAG, DIAG, DIAG,
                          DIAG, DIAG, DIAG, DIAG,
                          DIAG, DIAG, DIAG, DIAG,
                          DIAG, DIAG, DIAG, DIAG};
const v16sb v_dir_up = {UP, UP, UP, UP,
                        UP, UP, UP, UP,
                        UP, UP, UP, UP,
                        UP, UP, UP, UP};
#endif


// Reads in reference genome and reads, initializes nw_matrix
void init() {
	int i, read_num, size;
	unsigned long long index;
	char read_line[READ_SIZE*2]; 	// Double the size just to be safe
	char ref_line[REF_LINE_SIZE*2]; // Double line size just to be safe
	
//*********************************************
// Read in the reads
//*********************************************
	
	// open reads file
	errno = 0;
	FILE* f = fopen(read_file, "r");
	if (f == NULL) {
		printf("Could not open read file, %d\n", errno);
		exit(1);
	}
	
	// Find line with a read, add it to appropriate entry in reads[]
	for (i = 0; i<NUM_READS; i++) {
		fgets(read_line, READ_SIZE*2, f);
		while (read_line[0] != '@') {
			fgets(read_line, READ_SIZE*2, f); // Skip lines until next read
			if (read_line == NULL) {
				printf("Not enough reads in file\n");
				exit(1);
			}
		}
		fgets(read_line, READ_SIZE*2, f); // Read in a read
		strncpy(reads[i], read_line, READ_SIZE);
	}
	fclose(f);
	
	
//*********************************************
// Read in the genome
//*********************************************
	
	// Open genome file
	errno = 0;
	f = fopen(genome_file, "r");
	if (f == NULL) {
		printf("Could not open ref file, %d\n", errno);
		exit(1);
	}
	index = 0;
	
	// Add each line to ref_genome[]
	for (i=0; i<REF_SIZE/REF_LINE_SIZE; i++) {
		fgets(ref_line, REF_LINE_SIZE*2, f);
		if (index + strlen(ref_line) - 1 > REF_SIZE) {
			printf("Input file too big!, i=%d, index=%d, strlen(ref_line)=%d\n", i, index, strlen(ref_line) - 1);
			exit(1);
		}
		strncpy(&ref_genome[index], ref_line, REF_LINE_SIZE);
		index = index + REF_LINE_SIZE;
	}
	fclose(f);

//*********************************************
// Initialize NW matrix
//*********************************************	
	
	// Init column 1 to 0s and EDGE direction
	for (i=0; i<REF_SIZE+1; i++) {
		nw_matrix.score[i][0] = 0;
		nw_matrix.orig[i][0] = i;
	}
	
	// Init row 0 to decreasing values and LEFT direction (EDGE?)
	int fill = 0;
	for (i=0; i<READ_SIZE+1; i++) {
		nw_matrix.score[0][i] = fill;
		nw_matrix.orig[0][i] = 0;
		fill--;
	}
	
//*********************************************
// Erase old matrix file
//*********************************************	
	
	f = fopen("matrix.txt", "w");
	fclose(f);
}


// Prints the matrix in the format from the wikipedia page to the file matrix.txt
void print_matrix(int read_num) {
	FILE* matrix;
	int i, j;
	
	// Open matrix file
	errno = 0;
	matrix = fopen("matrix.txt", "a");
	if (matrix == NULL) {
		printf("Could not open ref file, %d\n", errno);
		exit(1);
	}
	
	
	fprintf(matrix, "    ");
	for (i=0; i < READ_SIZE; i++) {
		fprintf(matrix, "   ");
		fprintf(matrix, "%c", reads[read_num][i]);
	}
	fprintf(matrix, "\n");
	for (i=0; i<REF_SIZE+1; i++) {
		if (i == 0) fprintf(matrix, " ");
		else fprintf(matrix, "%c", ref_genome[i-1]);
		
		for (j=0; j<READ_SIZE+1; j++) {
			fprintf(matrix, " ");
			fprintf(matrix, "%3d", nw_matrix.score[i][j]);			
		}
		fprintf(matrix, "\n");
	}
	
	fprintf(matrix, "\n\n\n\n");
	fclose(matrix);
}


int main() {
	unsigned int i, j, k, l;		// loop variables
	int up, left, diag; 			// Values in boxes to left, diagonal, and up from current box
	int up_score, left_score, diag_score; // Score put in box for each of the different directions
	int match;						// Is the current box a match
	unsigned int max;				// Index of maximum final column value
	int max_score;					// Maximum final column value
	
	struct timeval start; 			// start time of a run
	struct timeval end;	  			// end time of a run
	struct timeval diff;			// difference between start and end
	double time;					// Readable version of diff
	
	init();							// Should init count as part of the time?
	gettimeofday(&start, NULL);		// Get start time of run

	for (l=0; l<NUM_RUNS; l++) { 	// Repeat calculation to get more accurate time measurement
		for (k=0; k<NUM_READS; k++) { // Loop through each read

			max = 0;
			max_score = -READ_SIZE;

			for (i=1; i<REF_SIZE+1; i++) { // Loop through each row

#ifdef __AVX__
				// Start by doing vectorized UP/DIAG comparisons.
				v16sb v_ref = _mm_set1_epi8(ref_genome[i-1]);
				for (j=1; j<READ_SIZE-14; j+=16) {
					v16sb v_read = *(v16sb*)&reads[k][j-1];

					// Does a component-wise comparison, which generates 0xFF or
					// 0x00, then uses that as mask
					v16sb v_match_adj = v_mismatch_pen + ((v_ref == v_read) & (v_match_score - v_mismatch_pen));

					// Saturating add of match_adj to the diagonal score
					v16sb v_diag = *(v16sb*)&nw_matrix.score[i-1][j-1];
					v16sb v_diag_score = _mm_adds_epi8(v_diag, v_match_adj);

					// Saturating add of gap_pen to the score of preceding row
					v16sb v_up = *(v16sb*)&nw_matrix.score[i-1][j];
					v16sb v_up_score = _mm_adds_epi8(v_up, v_gap_pen);

					// Find max of the two, and update dir
					v16sb v_score = _mm_max_epi8(v_diag_score, v_up_score);
					v16sb v_dir = v_dir_diag + ((v_up_score > v_diag_score) & (v_dir_up - v_dir_diag));

					// Write back (must be unaligned stores for now)
					_mm_storeu_si128((__m128i*)&nw_matrix.score[i][j], v_score);
					_mm_storeu_si128((__m128i*)&nw_matrix.dir[i][j], v_dir);
				}

				// Finish off any UP/DIAG checks that don't evenly divide into
				// our vector size
				for (; j<READ_SIZE+1; j++) {
					diag = nw_matrix.score[i-1][j-1];
					up = nw_matrix.score[i-1][j];
					diag_score = diag + (ref_genome[i-1] == reads[k][j-1]? MATCH_SCORE : MISMATCH_PEN);
					up_score = up + GAP_PEN;
					if (diag_score >= up_score) {
						nw_matrix.score[i][j] = diag_score;
						nw_matrix.dir[i][j] = DIAG;
					} else {
						nw_matrix.score[i][j] = up_score;
						nw_matrix.dir[i][j] = UP;
					}
				}

				// Do a final scan of the full row to check for LEFT being the
				// maximum score. Sadly, this part must be fully sequential
				for (j=1; j<READ_SIZE+1; j++) {
					left_score = nw_matrix.score[i][j-1] + GAP_PEN;
					if (left_score > nw_matrix.score[i][j]) {
						nw_matrix.score[i][j] = left_score;
						nw_matrix.dir[i][j] = LEFT;
					}
				}
#else
				for (j=1; j<READ_SIZE+1; j++) { // Loop through each column
					// Get adjacent values
					up = nw_matrix.score[i-1][j];
					left = nw_matrix.score[i][j-1];
					diag = nw_matrix.score[i-1][j-1];
					
					// Calculate each score
					match = ref_genome[i-1] == reads[k][j-1];
					if (match) diag_score = diag + MATCH_SCORE;
					else diag_score = diag + MISMATCH_PEN; // pen is negative
					
					left_score = left + GAP_PEN;
					up_score = up + GAP_PEN;
					
					// Fill in current entry based on which score is best
					if (diag_score >= left_score && diag_score >= up_score) {
						nw_matrix.score[i][j] = diag_score;
						nw_matrix.orig[i][j] = nw_matrix.orig[i-1][j-1];
					}
					else if (left_score >= diag_score && left_score >= up_score) {
						nw_matrix.score[i][j] = left_score; // pen is negative number
						nw_matrix.orig[i][j] = nw_matrix.orig[i][j-1];
					}
					else {
						nw_matrix.score[i][j] = up_score; //pen is negative number
						nw_matrix.orig[i][j] = nw_matrix.orig[i-1][j];
					}
				}
#endif

				// Determine if it's the new max path (TODO: allow more than 1 max path end?)
				if (nw_matrix.score[i][READ_SIZE] > max_score) {
					max = i;
					max_score = nw_matrix.score[i][READ_SIZE];
				}
			}
#ifdef DEBUG
			if (k==1) print_matrix(k); // Only print matrices if debug
#endif
			// Follow the best path back to the start
			best_fits[l][k] = nw_matrix.orig[max][READ_SIZE];//backTrack(max, READ_SIZE);
		}
	}
	
	// Timing stuff
	gettimeofday(&end, NULL);		// Get end time of run
	diff.tv_sec = end.tv_sec - start.tv_sec;	//subtract the seconds
	diff.tv_usec = end.tv_usec - start.tv_usec; // subtract the useconds
	time =  (double)(diff.tv_sec) + (double)((double)diff.tv_usec / (1000*1000));// Store run time in s
	
	
	// Print the results
	for (j = 0; j<NUM_RUNS; j++) {
		printf("Results from run %d:\n", j);
		for (i=0; i<NUM_READS; i++) {
			printf("%s\n", reads[i]);
			printf("READ #%d - Best fit at index %d\n", i, best_fits[j][i]);
		}
	}
	
	printf("Time for %d runs: %lf s\n", NUM_RUNS, time);
	
	return 0;
}
