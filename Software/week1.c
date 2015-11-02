#include <stdio.h>
#include <sys/time.h>

// Comment out for normal operation
#define DEBUG 1

#define REF_SIZE 64 //20340
#define READ_SIZE 8 //100
#define NUM_READS 1

#ifdef DEBUG
#define NUM_RUNS 1 // Make it easier to debug
#else
#define NUM_RUNS 100000 // Probably set to 1 when we have full data set
#endif

char* genome_file = "short_reference.fasta";
char* read_file = "short_reference.fastq";

char nw_matrix[REF_SIZE+1][READ_SIZE+1];
//char ref_genome[REF_SIZE];
char* ref_genome;
//char reads[NUM_READS][READ_SIZE];
char* reads[NUM_READS];

int gap_pen = -1;
int mismatch_pen = -1;
int match_score = 1;

// Initializes Needleman-Wunsch matrix and reference genome/reads (TODO: get genome/reads from file)
void init() {
	int i;
	ref_genome = "ACTGGTCAGCTACGTCAGCTAGCTAGCTAGCTAGCTAGTTCGATGTCGATCGATCGTGCTACTA";//GTACTAGCATC";
	reads[0] = "CGTGACGT";
	for (i=0; i<REF_SIZE+1; i++) {
		nw_matrix[i][0] = 0;
	}
	
	int fill = 0;
	for (i=0; i<READ_SIZE+1; i++) {
		nw_matrix[0][i] = fill;
		fill--;
	}
	
}

// Prints the matrix in the format from the wikipedia page
void print_matrix(int read_num) {
	int i, j;
	
	printf("    ");
	for (i=0; i < READ_SIZE; i++) {
		printf("  ");
		printf("%c", reads[read_num][i]);
	}
	printf("\n");
	for (i=0; i<REF_SIZE+1; i++) {
		if (i == 0) printf(" ");
		else printf("%c", ref_genome[i-1]);
		
		for (j=0; j<READ_SIZE+1; j++) {
			printf(" ");
			printf("%2d", nw_matrix[i][j]);			
		}
		printf("\n");
	}
}

// Returns the maximum value between integers a, b, and c
int findMax(int a, int b, int c) {
	if (a >= b && a >= c) return a;
	if (b >= c) return b;
	return c;
}

// Traces the path back to the first column to find where the best match starts (recursive function)
int backTrack(int row, int column) {
	int up, left, diag;
	int max;
	int status;
	
	if (column == 1) {
		printf("Best fit starts at index %d\n", row-1);
		return 0;
	}
	if (row == 0) return -1;
	
	up = nw_matrix[row-1][column];
	left = nw_matrix[row][column-1];
	diag = nw_matrix[row-1][column-1];
	
	// Figure out which way the best path goes
	max = findMax(up, left, diag);
	
	
	// It's possible that there's more than 1 best path
	// Recursively explore each direction that is on a best path
	if (up == max) {
		status = backTrack(row-1, column);
	}
	if (left == max) {
		status = backTrack(row, column-1);
	}
	if (diag == max) {
		status = backTrack(row-1, column-1);
	}
	return 0;
}


int main() {
	int i, j, k, l;		// loop variables
	int up, left, diag; // Values in boxes to left, diagonal, and up from current box
	int match;			// Is the current box a match
	int max;			// Index of maximum final column value
	
	struct timeval start; 	// start time of a run
	struct timeval end;	  	// end time of a run
	struct timeval diff;	// difference between start and end
	double time;			// Readable version of diff
	
	init();					// Should init count as part of the time?
	gettimeofday(&start, NULL);		// Get start time of run
	
	for (l=0; l<NUM_RUNS; l++) { // Repeat calculation to get more accurate time measurement
		for (k=0; k<NUM_READS; k++) { // Loop through each read
			max = -1 * READ_SIZE;
			for (i=1; i<REF_SIZE+1; i++) { // Loop through each row
				for (j=1; j<READ_SIZE+1; j++) { // Loop through each column
				
					// Get adjacent values
					up = nw_matrix[i-1][j];
					left = nw_matrix[i][j-1];
					diag = nw_matrix[i-1][j-1];
					
					// Determine which one to use
					if (diag >= left && diag >= up) {
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
					}
					
				}
			}
#ifdef DEBUG
			print_matrix(k);
#endif
			// Follow the best path back to the start
			backTrack(max, READ_SIZE);
		}
	}
	
	// Timing stuff
	gettimeofday(&end, NULL);		// Get end time of run
	diff.tv_sec = end.tv_sec - start.tv_sec;	//subtract the seconds
	diff.tv_usec = end.tv_usec - start.tv_usec; // subtract the useconds
	time =  (double)(diff.tv_sec) + (double)((double)diff.tv_usec / (1000*1000));// Store run time in s
	printf("Time for %d runs: %lf s\n", NUM_RUNS, time);
	return 0;
}