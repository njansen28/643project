#include "week4.h"

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

void needlemanWunsch(basepair_t read_r[READS_PER_RUN][READ_SIZE], basepair_quartet_t ref_genome[REF_SIZE/4], int results[READS_PER_RUN]) {

	unsigned int i,j;							// loop variables
	orig_t max_orig[READS_PER_RUN];				// Index of maximum original column value
	int max_score[READS_PER_RUN];				// Maximum final column value
	basepair_quartet_t ref;

	score_t score1[READS_PER_RUN][READ_SIZE];
	score_t score2[READS_PER_RUN][READ_SIZE];
	orig_t orig1[READS_PER_RUN][READ_SIZE];
	orig_t orig2[READS_PER_RUN][READ_SIZE];

	INIT: for (j=0; j<READS_PER_RUN; j++) {
		max_orig[j] = 0;
		max_score[j] = -READ_SIZE;
	}

	ROW: for (i=1; i<REF_SIZE+1; i+=4) { // Loop through each row
		ref = ref_genome[i/4];

		READ: for (j=0; j<READS_PER_RUN; j++) {
			doRow(i, read_r[j], ref.a, score1[j], score2[j], orig1[j], orig2[j]);

			// Determine if it's the new max path (TODO: allow more than 1 max path end?)
			if (score2[j][READ_SIZE-1] > max_score[j]) {
				max_score[j] = score2[j][READ_SIZE-1];
				max_orig[j] = orig2[j][READ_SIZE-1];
			}

			doRow(i+1, read_r[j], ref.b, score2[j], score1[j], orig2[j], orig1[j]);

			// Determine if it's the new max path (TODO: allow more than 1 max path end?)
			if (score1[j][READ_SIZE-1] > max_score[j]) {
				max_score[j] = score1[j][READ_SIZE-1];
				max_orig[j] = orig1[j][READ_SIZE-1];
			}

			doRow(i+2, read_r[j], ref.c, score1[j], score2[j], orig1[j], orig2[j]);

			// Determine if it's the new max path (TODO: allow more than 1 max path end?)
			if (score2[j][READ_SIZE-1] > max_score[j]) {
				max_score[j] = score2[j][READ_SIZE-1];
				max_orig[j] = orig2[j][READ_SIZE-1];
			}

			doRow(i+3, read_r[j], ref.d, score2[j], score1[j], orig2[j], orig1[j]);

			// Determine if it's the new max path (TODO: allow more than 1 max path end?)
			if (score1[j][READ_SIZE-1] > max_score[j]) {
				max_score[j] = score1[j][READ_SIZE-1];
				max_orig[j] = orig1[j][READ_SIZE-1];
			}
		}
	}

	RESULTS: for (j=0; j<READS_PER_RUN; j++) {
		results[j] = max_orig[j];
	}
}

