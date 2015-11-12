#include "week3.h"

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


unsigned int needlemanWunsch(char reads[READ_SIZE], char ref_genome[REF_SIZE]) {

	unsigned int i, j;		// loop variables
	int up, left, diag; 			// Values in boxes to left, diagonal, and up from current box
	int up_score, left_score, diag_score; // Score put in box for each of the different directions
	int match;						// Is the current box a match
	unsigned int max;				// Index of maximum final column value
	int max_score;					// Maximum final column value

	max = 0;
	max_score = -READ_SIZE;

	for (i=1; i<REF_SIZE+1; i++) { // Loop through each row


		for (j=1; j<READ_SIZE+1; j++) { // Loop through each column
			// Get adjacent values
			up = nw_matrix.score[i-1][j];
			left = nw_matrix.score[i][j-1];
			diag = nw_matrix.score[i-1][j-1];

			// Calculate each score
			match = ref_genome[i-1] == reads[j-1];
			if (match) diag_score = diag + MATCH_SCORE;
			else diag_score = diag + MISMATCH_PEN; // pen is negative

			left_score = left + GAP_PEN;
			up_score = up + GAP_PEN;

			// Fill in current entry based on which score is best
			if (diag_score >= left_score && diag_score >= up_score) {
				nw_matrix.score[i][j] = diag_score;
				nw_matrix.dir[i][j] = DIAG;
			}
			else if (left_score >= diag_score && left_score >= up_score) {
				nw_matrix.score[i][j] = left_score; // pen is negative number
				nw_matrix.dir[i][j] = LEFT;
			}
			else {
				nw_matrix.score[i][j] = up_score; //pen is negative number
				nw_matrix.dir[i][j] = UP;
			}
		}

		// Determine if it's the new max path (TODO: allow more than 1 max path end?)
		if (nw_matrix.score[i][READ_SIZE] > max_score) {
			max = i;
			max_score = nw_matrix.score[i][READ_SIZE];
		}
	}
	return backTrack(max, READ_SIZE);
}

