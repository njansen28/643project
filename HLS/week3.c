#include "week3.h"

//NW_matrix nw_matrix;
//char score[REF_SIZE+1][READ_SIZE+1];
//unsigned int orig  [REF_SIZE+1][READ_SIZE+1];

//unsigned int max;				// Index of maximum final column value
unsigned int max_orig;
int max_score;					// Maximum final column value

unsigned int needlemanWunsch(char reads[READ_SIZE], char ref_genome, unsigned int orig_in[READ_SIZE+1], unsigned int orig_out[READ_SIZE+1],
							 char score_in[READ_SIZE+1], char score_out[READ_SIZE+1], unsigned int i) {

	unsigned int j;							// loop variable
	int up, left, diag; 					// Values in boxes to left, diagonal, and up from current box
	int up_score, left_score, diag_score; 	// Score put in box for each of the different directions
	int match;								// Is the current box a match
	//unsigned int max;						// Index of maximum final column value
	//int max_score;						// Maximum final column value




	//max = 0;
	//max_score = -READ_SIZE;
	//score1[0] = nw_matrix
	if (i == 1) {
		//max = 0;
		max_orig = 0;
		max_score = -READ_SIZE;
	}
	//score_out[0] = 0;
	//orig_out[0] = i-1;

	//printf("%s, %c, %d\n", reads, ref_genome, i);

	COL: for (j=1; j<READ_SIZE+1; j++) { // Loop through each column
		// Get adjacent values
		diag = score_in[j-1];
		up = score_in[j];
		left = score_out[j-1];

		// Calculate each score
		match = ref_genome == reads[j-1];
		if (match) diag_score = diag + MATCH_SCORE;
		else diag_score = diag + MISMATCH_PEN; // pen is negative

		left_score = left + GAP_PEN;
		up_score = up + GAP_PEN;

		// Fill in current entry based on which score is best
		if (diag_score >= left_score && diag_score >= up_score) {
			score_out[j] = diag_score;
			orig_out[j] = orig_in[j-1];
		}
		else if (left_score >= diag_score && left_score >= up_score) {
			score_out[j] = left_score; // pen is negative number
			orig_out[j] = orig_out[j-1];
		}
		else {
			score_out[j] = up_score; //pen is negative number
			orig_out[j] = orig_in[j];
		}
	}

	// Determine if it's the new max path (TODO: allow more than 1 max path end?)
	if (score_out[READ_SIZE] > max_score) {
		//max = i;
		max_score = score_out[READ_SIZE];
		max_orig = orig_out[READ_SIZE];
		//printf("max_orig = %d %d %d %d\n", max_orig, i, max, max_score);
	}
	return max_orig;
}

