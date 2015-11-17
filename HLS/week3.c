#include "week3.h"

void doRow(int i, basepair_t read[READ_SIZE], basepair_t ref_genome,
		score_t score_in[READ_SIZE], score_t score_out[READ_SIZE],
		orig_t orig_in[READ_SIZE], orig_t orig_out[READ_SIZE]) {
	int j;
	char match;									// Is the current box a match
	score_t up, left, diag; 					// Values in boxes to left, diagonal, and up from current box
	score_t up_score, left_score, diag_score; 	// Score put in box for each of the different directions
	orig_t up_orig, left_orig, diag_orig;       // Origin from each direction
	score_t final_score;
	orig_t final_orig;

	COL: for (j=1; j<READ_SIZE+1; j++) { // Loop through each column
		// Get adjacent values
		// On first row, score is -j in column j
		// Otherwise, on first column, score is 0
		// Otherwise, read from score_in
		diag = i == 1? -j+1 : j == 1? 0 : score_in[j-2];
		up = i == 1? -j : score_in[j-1];
		left = j == 1? 0 : score_out[j-2];
		// On first row, orig is irrelevant
		// Otherwise, on first column, orig is i in row i
		// Otherwise, read from orig_in
		diag_orig = i == 1? 0 : j == 1? i-1 : orig_in[j-2];
		up_orig = i == 1? 0 : orig_in[j-1];
		left_orig = j == 1? i-1 : orig_out[j-2];

		// Calculate each score
		match = ref_genome == read[j-1];
		if (match) diag_score = diag + MATCH_SCORE;
		else diag_score = diag + MISMATCH_PEN; // pen is negative

		left_score = left + GAP_PEN;
		up_score = up + GAP_PEN;

		// Fill in current entry based on which score is best
		if (diag_score >= left_score && diag_score >= up_score) {
			final_score = diag_score;
			final_orig = diag_orig;
		}
		else if (left_score >= diag_score && left_score >= up_score) {
			final_score = left_score; // pen is negative number
			final_orig = left_orig;
		}
		else {
			final_score = up_score; //pen is negative number
			final_orig = up_orig;
		}
		score_out[j-1] = final_score;
		orig_out[j-1] = final_orig;
	}
}

orig_t needlemanWunsch(basepair_t read[READ_SIZE], basepair_t ref_genome[REF_SIZE]) {

	unsigned int i;								// loop variables
	orig_t max_orig;							// Index of maximum original column value
	int max_score;								// Maximum final column value

	score_t score1[READ_SIZE];
	score_t score2[READ_SIZE];
	orig_t orig1[READ_SIZE];
	orig_t orig2[READ_SIZE];

	max_orig = 0;
	max_score = -READ_SIZE;

	ROW: for (i=1; i<REF_SIZE+1; i++) { // Loop through each row
		doRow(i, read, ref_genome[i-1], score1, score2, orig1, orig2);

		// Determine if it's the new max path (TODO: allow more than 1 max path end?)
		if (score2[READ_SIZE-1] > max_score) {
			//max = i;
			max_score = score2[READ_SIZE-1];
			max_orig = orig2[READ_SIZE-1];
			//printf("max_orig = %d %d %d %d\n", max_orig, i, max, max_score);
		}

		i++;

		doRow(i, read, ref_genome[i-1], score2, score1, orig2, orig1);

		// Determine if it's the new max path (TODO: allow more than 1 max path end?)
		if (score1[READ_SIZE-1] > max_score) {
			//max = i;
			max_score = score1[READ_SIZE-1];
			max_orig = orig1[READ_SIZE-1];
			//printf("max_orig = %d %d %d %d\n", max_orig, i, max, max_score);
		}
	}

	return max_orig;
}

