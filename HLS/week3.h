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
#define NUM_READS 10		// Number of reads in read file
#define REF_LINE_SIZE 100	// Length of each line in file of reference genome


// Direction type, EDGE means that entry is in 0th column, so we stop following
//typedef enum {UP, LEFT, DIAG, EDGE} direction;

typedef struct {
	char score[REF_SIZE+1][READ_SIZE+1];
	unsigned int orig  [REF_SIZE+1][READ_SIZE+1];
} NW_matrix;

extern NW_matrix nw_matrix;									// The NW matrix, as struct-of-arrays instead of array-of-structs
//char ref_genome[REF_SIZE+1];					// The reference genome
//char reads[NUM_READS][READ_SIZE+1];				// The reads to be sequenced
unsigned int best_fits[NUM_READS];	// The best fit index for each read


// Scoring system
#define GAP_PEN       -1
#define MISMATCH_PEN  -1
#define MATCH_SCORE    1

