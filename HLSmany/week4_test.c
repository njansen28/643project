#include "week4.h"

char* genome_file = "../../../long_reference.fasta"; 	// File where reference genome is stored
char* read_file = "../../../long_sequences.fastq";		// File where reference reads are stored

basepair_t ref_genome[REF_SIZE+1];        // The reference genome
basepair_t reads[NUM_READS][READ_SIZE+1]; // The reads to be sequenced

orig_t best_fits[NUM_READS];	// The best fit index for each read

void copy_base_pairs(basepair_t *dest, const char *src, int len) {
	int i;
	for (i = 0; i < len; i++) {
		switch (src[i]) {
		case 'A': dest[i] = BP_A; break;
		case 'G': dest[i] = BP_G; break;
		case 'C': dest[i] = BP_C; break;
		case 'T': dest[i] = BP_T; break;
		default:
			printf("Unrecognized character %c", src[i]);
			exit(1);
		}
	}
}

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
		copy_base_pairs(&reads[i][0], &read_line[0], READ_SIZE);
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
			printf("Input file too big!, i=%d, index=%lld, strlen(ref_line)=%lld\n", i, index, strlen(ref_line) - 1);
			exit(1);
		}
		copy_base_pairs(&ref_genome[i*REF_LINE_SIZE], &ref_line[0], REF_LINE_SIZE);
		index = index + REF_LINE_SIZE;
	}
	fclose(f);
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
		best_fits[k] = needlemanWunsch(reads[k], ref_genome);
		// Print the results
		printf("READ #%d - Best fit at index %d\n", k, best_fits[k]);
	}

	return 0;
}

