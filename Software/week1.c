#include <stdio.h>
#include <sys/time.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

// Comment out for normal operation
//#define DEBUG 1

#define REF_SIZE 20340 		// Size of reference genome
#define READ_SIZE 100		// Size of each read
#define NUM_READS 10		// Number of reads in read file
#define REF_LINE_SIZE 60	// Length of each line in file of reference genome

#ifdef DEBUG
#define NUM_RUNS 1 // Make it easier to debug
#else
#define NUM_RUNS 100 
#endif

// Direction type, EDGE means that entry is in 0th column, so we stop following
typedef enum {UP, LEFT, DIAG, EDGE} direction;

// Entry in NW matrix. Stores score and direction
struct entry {
	int score;		// The score for an entry in the matrix
	direction dir;	// The direction that we derived this score from
};
typedef struct entry entry, *pentry;

char* genome_file = "short_reference.fasta"; 	// File where reference genome is stored
char* read_file = "short_sequences.fastq";		// File where reference reads are stored

entry nw_matrix[REF_SIZE+1][READ_SIZE+1];		// the NW matrix. Each entry contains a score and a direction 
char ref_genome[REF_SIZE+1];					// The reference genome
char reads[NUM_READS][READ_SIZE+1];				// The reads to be sequenced
unsigned int best_fits[NUM_RUNS][NUM_READS];	// The best fit index for each read


// Scoring system
int gap_pen = -1;
int mismatch_pen = -1;
int match_score = 1;



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
	
	fgets(ref_line, REF_LINE_SIZE*2, f); // Get rid garbage line at top
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
		nw_matrix[i][0].score = 0;
		nw_matrix[i][0].dir = EDGE;
	}
	
	// Init row 0 to decreasing values and LEFT direction (EDGE?)
	int fill = 0;
	for (i=0; i<READ_SIZE+1; i++) {
		nw_matrix[0][i].score = fill;
		nw_matrix[0][i].dir = LEFT;
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
			fprintf(matrix, "%3d", nw_matrix[i][j].score);			
		}
		fprintf(matrix, "\n");
	}
	
	fprintf(matrix, "\n\n\n\n");
	fclose(matrix);
}

// Returns the maximum value between integers a, b, and c
// NO LONGER USED
int findMax(int a, int b, int c) {
	if (a >= b && a >= c) return a;
	if (b >= c) return b;
	return c;
}

// Traces the path back to the first column to find where the best match starts (recursive function)
int backTrack(unsigned int row, unsigned int column) {
	//int up, left, diag;
	//int max;
	//int status;
	direction dir;
	
	if (column == 1) {
		//printf("Best fit starts at index %d\n", row-1);
		return row-1;
	}
	if (row == 0) return -1;
	
	dir = nw_matrix[row][column].dir;
	if (dir == UP) {
		return backTrack(row-1, column);
	}
	else if (dir == LEFT) {
		return backTrack(row, column-1);
	}
	else if (dir == DIAG) {
		return backTrack(row-1, column-1);
	}
	
	
	// Removed due to new understanding of algorithm. Now have backtrace directions
	/*
	up = nw_matrix[row-1][column];
	left = nw_matrix[row][column-1];
	diag = nw_matrix[row-1][column-1];
	
	// Figure out which way the best path goes
	max = findMax(up, left, diag);
	
	
	// It's possible that there's more than 1 best path
	// Recursively explore each direction that is on a best path
	if (up == max) {
		status = backTrack(row-1, column);
		if (status != -1) return status;
	}
	if (left == max) {
		status = backTrack(row, column-1);
		if (status != -1) return status;
	}
	if (diag == max) {
		status = backTrack(row-1, column-1);
		if (status != -1) return status;
	}*/
	return -1;
}


int main() {
	unsigned int i, j, k, l;		// loop variables
	int up, left, diag; 			// Values in boxes to left, diagonal, and up from current box
	int up_score, left_score, diag_score; // Score put in box for each of the different directions
	int match;						// Is the current box a match
	unsigned int max;				// Index of maximum final column value
	int status;
	
	struct timeval start; 			// start time of a run
	struct timeval end;	  			// end time of a run
	struct timeval diff;			// difference between start and end
	double time;					// Readable version of diff
	
	init();							// Should init count as part of the time?
	gettimeofday(&start, NULL);		// Get start time of run

	for (l=0; l<NUM_RUNS; l++) { 	// Repeat calculation to get more accurate time measurement
		for (k=0; k<NUM_READS; k++) { // Loop through each read
			max = 0;
			for (i=1; i<REF_SIZE+1; i++) { // Loop through each row
				for (j=1; j<READ_SIZE+1; j++) { // Loop through each column
					
					// Get adjacent values
					up = nw_matrix[i-1][j].score;
					left = nw_matrix[i][j-1].score;
					diag = nw_matrix[i-1][j-1].score;
					
					// Determine which one to use
					
					// removed due to new understanding of how algorithm works
					/*if (diag >= left && diag >= up) {
						match = ref_genome[i-1] == reads[k][j-1];
						if (match) nw_matrix[i][j] = diag + match_score;
						else nw_matrix[i][j] = diag + mismatch_pen; // pen is negative number
					}
					else if (left >= diag && left >= up) {
						nw_matrix[i][j] = left + gap_pen; // pen is negative number
					}
					else {
						nw_matrix[i][j] = up + gap_pen; //pen is negative number
					}
					
					// Determine if it's the new max path (TODO: allow more than 1 max path end?)
					if (j == READ_SIZE) {
						if (nw_matrix[i][j] > nw_matrix[max][j])
							max = i;
					}*/
					
					// Calculate each score
					match = ref_genome[i-1] == reads[k][j-1];
					if (match) diag_score = diag + match_score;
					else diag_score = diag + mismatch_pen; // pen is negative
					
					left_score = left + gap_pen;
					up_score = up + gap_pen;
					
					// Fill in current entry based on which score is best
					if (diag_score >= left_score && diag_score >= up_score) {
						nw_matrix[i][j].score = diag_score;
						nw_matrix[i][j].dir = DIAG;
					}
					else if (left_score >= diag_score && left_score >= up_score) {
						nw_matrix[i][j].score = left_score; // pen is negative number
						nw_matrix[i][j].dir = LEFT;
					}
					else {
						nw_matrix[i][j].score = up_score; //pen is negative number
						nw_matrix[i][j].dir = UP;
					}
					
					// Determine if it's the new max path (TODO: allow more than 1 max path end?)
					if (j == READ_SIZE) {
						if (nw_matrix[i][j].score > nw_matrix[max][j].score)
							max = i;
					}
					
				}
			}
#ifdef DEBUG
			print_matrix(k); // Only print matrices if debug
#endif
			// Follow the best path back to the start
			best_fits[l][k] = backTrack(max, READ_SIZE);
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
			printf("READ #%d - Best fit at index %d\n", i, best_fits[j][i]);
		}
	}
	
	printf("Time for %d runs: %lf s\n", NUM_RUNS, time);
	
	return 0;
}