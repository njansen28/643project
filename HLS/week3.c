#include "week3.h"

void doRow(int i, basepair_t read_r[READ_SIZE], basepair_t ref_genome,
		score_t score_in[READ_SIZE], score_t score_out[READ_SIZE],
		orig_t orig_in[READ_SIZE], orig_t orig_out[READ_SIZE]) {
	int j;
	char match;									// Is the current box a match
	score_t up, left, diag; 					// Values in boxes to left, diagonal, and up from current box
	score_t up_score, left_score, diag_score; 	// Score put in box for each of the different directions
	orig_t up_orig, left_orig, diag_orig;       // Origin from each direction

	score_t prev_score_out = 0;
	orig_t prev_orig_out = i-1;

	score_t prev_score_in;
	score_t cur_score_in = 0;
	orig_t prev_orig_in;
	orig_t cur_orig_in = i-1;

	COL: for (j=1; j<READ_SIZE+1; j++) { // Loop through each column
		prev_score_in = cur_score_in;
		cur_score_in = i == 1? -j : score_in[j-1];
		prev_orig_in = cur_orig_in;
		cur_orig_in = i == 1? 0 : orig_in[j-1];
		// Get adjacent values
		// On first row, score is -j in column j
		// Otherwise, on first column, score is 0
		// Otherwise, read from score_in
		diag = prev_score_in;
		up = cur_score_in;
		left = prev_score_out;
		// On first row, orig is irrelevant
		// Otherwise, on first column, orig is i in row i
		// Otherwise, read from orig_in
		diag_orig = prev_orig_in;
		up_orig = cur_orig_in;
		left_orig = prev_orig_out;

		// Calculate each score
		match = ref_genome == read_r[j-1];
		if (match) diag_score = diag + MATCH_SCORE;
		else diag_score = diag + MISMATCH_PEN; // pen is negative

		left_score = left + GAP_PEN;
		up_score = up + GAP_PEN;

		// Fill in current entry based on which score is best
		if (diag_score >= left_score && diag_score >= up_score) {
			prev_score_out = diag_score;
			prev_orig_out = diag_orig;
		}
		else if (left_score >= up_score) {
			prev_score_out = left_score; // pen is negative number
			prev_orig_out = left_orig;
		}
		else {
			prev_score_out = up_score; //pen is negative number
			prev_orig_out = up_orig;
		}
		score_out[j-1] = prev_score_out;
		orig_out[j-1] = prev_orig_out;
	}
}

orig_t needlemanWunsch(basepair_t read_r[READ_SIZE], basepair_quartet_t ref_genome[REF_SIZE/4]) {

	unsigned int i;								// loop variables
	orig_t max_orig;							// Index of maximum original column value
	int max_score;								// Maximum final column value
	basepair_quartet_t ref;

	score_t score1[READ_SIZE];
	score_t score2[READ_SIZE];
	orig_t orig1[READ_SIZE];
	orig_t orig2[READ_SIZE];

	max_orig = 0;
	max_score = -READ_SIZE;

	ROW: for (i=1; i<REF_SIZE+1; i++) { // Loop through each row
		ref = ref_genome[i/4];

		doRow(i, read_r, ref.a, score1, score2, orig1, orig2);

		// Determine if it's the new max path (TODO: allow more than 1 max path end?)
		if (score2[READ_SIZE-1] > max_score) {
			max_score = score2[READ_SIZE-1];
			max_orig = orig2[READ_SIZE-1];
		}

		i++;

		doRow(i, read_r, ref.b, score2, score1, orig2, orig1);

		// Determine if it's the new max path (TODO: allow more than 1 max path end?)
		if (score1[READ_SIZE-1] > max_score) {
			max_score = score1[READ_SIZE-1];
			max_orig = orig1[READ_SIZE-1];
		}

		i++;

		doRow(i, read_r, ref.c, score1, score2, orig1, orig2);

		// Determine if it's the new max path (TODO: allow more than 1 max path end?)
		if (score2[READ_SIZE-1] > max_score) {
			max_score = score2[READ_SIZE-1];
			max_orig = orig2[READ_SIZE-1];
		}

		i++;

		doRow(i, read_r, ref.d, score2, score1, orig2, orig1);

		// Determine if it's the new max path (TODO: allow more than 1 max path end?)
		if (score1[READ_SIZE-1] > max_score) {
			max_score = score1[READ_SIZE-1];
			max_orig = orig1[READ_SIZE-1];
		}
	}

	return max_orig;
}

