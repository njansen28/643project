#include "week3.h"

char* genome_file = "../../../long_reference.fasta"; 	// File where reference genome is stored
char* read_file = "../../../long_sequences.fastq";		// File where reference reads are stored

char ref_genome[REF_SIZE+1];					// The reference genome
char reads[NUM_READS][READ_SIZE+1];				// The reads to be sequenced

NW_matrix nw_matrix;


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

	fgets(ref_line, REF_LINE_SIZE*2, f); // Get rid garbage line at top
	index = 0;

	// Add each line to ref_genome[]
	for (i=0; i<REF_SIZE/REF_LINE_SIZE; i++) {
		fgets(ref_line, REF_LINE_SIZE*2, f);
		if (index + strlen(ref_line) - 1 > REF_SIZE) {
			printf("Input file too big!, i=%d, index=%lld, strlen(ref_line)=%lld\n", i, index, strlen(ref_line) - 1);
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

#if 0
// Traces the path back to the first column to find where the best match starts (recursive function)
int backTrack(unsigned int row, unsigned int column) {
	direction dir;

	if (column == 1) {
		//printf("Best fit starts at index %d\n", row-1);
		return row-1;
	}
	if (row == 0) return -1;

	dir = nw_matrix.dir[row][column];
	if (dir == UP) {
		return backTrack(row-1, column);
	}
	else if (dir == LEFT) {
		return backTrack(row, column-1);
	}
	else if (dir == DIAG) {
		return backTrack(row-1, column-1);
	}

	return -1;
}
#endif

int main() {
	unsigned int k, i;		// loop variables
	unsigned int max;
	init();							// Should init count as part of the time?

	for (k=0; k<NUM_READS; k++) { // Loop through each read
		// Follow the best path back to the start
		best_fits[k] = needlemanWunsch(reads[k], ref_genome);
		//best_fits[k] = backTrack(max, READ_SIZE);
	}


	// Print the results
	for (i=0; i<NUM_READS; i++) {
		printf("READ #%d - Best fit at index %d\n", i, best_fits[i]);
	}

	return 0;
}

