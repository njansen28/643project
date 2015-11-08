#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define GENOME_SIZE 1000000
#define LINE_SIZE 100
#define NUM_READS 10000
#define FUZZY_FACTOR 5

char* genome_file = "long_reference.fasta";
char* read_file = "long_sequences.fastq";

void fuzzify(char* line) {
	int i;
	int index, new_letter;
	char letter;
	
	for (i=0; i<FUZZY_FACTOR; i++) {
		index = rand() % LINE_SIZE;
		new_letter = rand() % 4;
		
		if (new_letter == 0)
			letter = 'A';
		else if (new_letter == 1)
			letter = 'T';
		else if (new_letter == 2)
			letter = 'C';
		else if (new_letter == 3)
			letter = 'G';
		else
			printf("You messed up the RN function\n");
		
		line[index] = letter;
	}
}

int main() {
	int i, j;
	FILE* f_ref;
	FILE* f_read;
	int rand_val;
	int offset;
	char line[LINE_SIZE+1];
	
	// Seed random number generator
	srand(time(NULL));
	f_ref = fopen(genome_file, "w");
	
	for (i=0; i<GENOME_SIZE/100; i++) {
		for (j=0; j<LINE_SIZE; j++) {
			rand_val = rand() % 4;
			if (rand_val == 0)
				fprintf(f_ref, "A");
			else if (rand_val == 1)
				fprintf(f_ref, "T");
			else if (rand_val == 2)
				fprintf(f_ref, "C");
			else if (rand_val == 3)
				fprintf(f_ref, "G");
			else
				printf("You messed up the RN function\n");
		}
		fprintf(f_ref, "\n");
	}
	
	fclose(f_ref);
	f_ref = fopen(genome_file, "r");
	f_read = fopen(read_file, "w");
	
	for (i=0; i<NUM_READS; i++) {
		offset = i*LINE_SIZE;
		fprintf(f_read, "@ offset %d\n", offset);
		fgets(line, LINE_SIZE+1, f_ref);
		fuzzify(line);
		fprintf(f_read, "%s\n", line);
		fgets(line, LINE_SIZE, f_ref);
	}
	
	fclose(f_ref);
	fclose(f_read);
}