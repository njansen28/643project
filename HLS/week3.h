#include <stdio.h>
#include <sys/time.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include "ap_cint.h"

// Comment out for normal operation
//#define DEBUG 1

#define REF_SIZE 1000000 	// Size of reference genome
#define READ_SIZE 100		// Size of each read
#define NUM_READS 10		// Number of reads in read file
#define REF_LINE_SIZE 100	// Length of each line in file of reference genome


// Direction type, EDGE means that entry is in 0th column, so we stop following
//typedef enum {UP, LEFT, DIAG, EDGE} direction;

typedef uint2 basepair_t;
typedef int8 score_t;
typedef uint20 orig_t;
typedef struct {
	basepair_t a;
	basepair_t b;
	basepair_t c;
	basepair_t d;
} basepair_quartet_t;

// Scoring system
#define GAP_PEN       -1
#define MISMATCH_PEN  -1
#define MATCH_SCORE    1

// Constants for basepair_t
#define BP_A 0
#define BP_G 1
#define BP_C 2
#define BP_T 3
