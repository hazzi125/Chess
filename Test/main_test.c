#define CTEST_MAIN

#include <stdlib.h>
#include <stdio.h>
#include <func.h>
#include <ctest.h>
#include <stdbool.h>

CTEST(rook, correct_rook) {
	int k[4];
	k[0] = 1;
	k[1] = 1;
	k[2] = 1;
	k[3] = 4;
	int result = check_rook(k[0], k[1], k[2], k[3]);
	int expect = 1;
	ASSERT_EQUAL(expect, result);
}

CTEST(rook, uncorrect_rook) {
	int k[4];
	k[0] = 1;
	k[1] = 1;
	k[2] = 4;
	k[3] = 4;
	int result = check_rook(k[0], k[1], k[2], k[3]);
	int expect = 0;
	ASSERT_EQUAL(expect, result);
}

CTEST(knight, correct_knight) {
	int k[4];
	k[0] = 2;
	k[1] = 1;
	k[2] = 3;
	k[3] = 3;
	int result = check_knight(k[0], k[1], k[2], k[3]);
	int expect = 1;
	ASSERT_EQUAL(expect, result);
}

CTEST(knight, uncorrect_knight) {
	int k[4];
	k[0] = 2;
	k[1] = 1;
	k[2] = 6;
	k[3] = 6;
	int result = check_knight(k[0], k[1], k[2], k[3]);
	int expect = 0;
	ASSERT_EQUAL(expect, result);
}

CTEST(bishop, correct_bishop) {
	int k[4];
	k[0] = 3;
	k[1] = 1;
	k[2] = 5;
	k[3] = 3;
	int result = check_bishop(k[0], k[1], k[2], k[3]);
	int expect = 1;
	ASSERT_EQUAL(expect, result);
}

CTEST(bishop, uncorrect_bishop) {
	int k[4];
	k[0] = 3;
	k[1] = 1;
	k[2] = 5;
	k[3] = 5;
	int result = check_bishop(k[0], k[1], k[2], k[3]);
	int expect = 0;
	ASSERT_EQUAL(expect, result);
}

CTEST(queen, correct_queen) {
	int k[4];
	k[0] = 4;
	k[1] = 1;
	k[2] = 4;
	k[3] = 4;
	int result = check_queen(k[0], k[1], k[2], k[3]);
	int expect = 1;
	ASSERT_EQUAL(expect, result);
}

CTEST(queen, uncorrect_queen) {
	int k[4];
	k[0] = 4;
	k[1] = 1;
	k[2] = 6;
	k[3] = 6;
	int result = check_queen(k[0], k[1], k[2], k[3]);
	int expect = 0;
	ASSERT_EQUAL(expect, result);
}

CTEST(king, correct_king) {
	int k[4];
	k[0] = 5;
	k[1] = 1;
	k[2] = 5;
	k[3] = 2;
	int result = check_king(k[0], k[1], k[2], k[3]);
	int expect = 1;
	ASSERT_EQUAL(expect, result);
}

CTEST(king, uncorrect_king) {
	int k[4];
	k[0] = 5;
	k[1] = 1;
	k[2] = 5;
	k[3] = 5;
	int result = check_king(k[0], k[1], k[2], k[3]);
	int expect = 0;
	ASSERT_EQUAL(expect, result);
}

CTEST(pawn, correct_pawn) {
	int k[4];
	k[0] = 1;
	k[1] = 1;
	k[2] = 3;
	k[3] = 1;
	int result = check_pawn(k[0], k[1], k[2], k[3]);
	int expect = 1;
	ASSERT_EQUAL(expect, result);
}

CTEST(pawn, uncorrect_pawn) {
	int k[4];
	k[0] = 1;
	k[1] = 1;
	k[2] = 7;
	k[3] = 7;
	int result = check_pawn(k[0], k[1], k[2], k[3]);
	int expect = 0;
	ASSERT_EQUAL(expect, result);
}

CTEST(pawn2, correct_pawn2) {
	int k[4];
	k[0] = 7;
	k[1] = 7;
	k[2] = 5;
	k[3] = 7;
	int result = check_pawn2(k[0], k[1], k[2], k[3]);
	int expect = 1;
	ASSERT_EQUAL(expect, result);
}

CTEST(pawn2, uncorrect_pawn2) {
	int k[4];
	k[0] = 7;
	k[1] = 7;
	k[2] = 3;
	k[3] = 3;
	int result = check_pawn2(k[0], k[1], k[2], k[3]);
	int expect = 0;
	ASSERT_EQUAL(expect, result);
}

CTEST(hack, correct_hack) {
	char A[8][8];
	int i, j;

	for(i=0; i<8; i++) {
        A[1][i] = 'P';
        A[8-2][i] = 'p';
        for(j=2; j<8-2; j++)
            A[j][i] = ' ';
    }

    A[0][0] = 'R';
    A[0][1] = 'N';
    A[0][2] = 'B';
    A[0][3] = 'Q';
    A[0][4] = 'K';
    A[0][5] = 'B';
    A[0][6] = 'N';
    A[0][7] = 'R';

    A[8-1][0] = 'r';
    A[8-1][1] = 'n';
    A[8-1][2] = 'b';
    A[8-1][3] = 'k';
    A[8-1][4] = 'q';
    A[8-1][5] = 'b';
    A[8-1][6] = 'n';
    A[8-1][7] = 'r';

	int k[4];
	k[0] = 1;
	k[1] = 1;
	k[2] = 5;
	k[3] = 5;
	int result = hack(k[0], k[1], k[2], k[3], A);
	int expect = 1;
	ASSERT_EQUAL(expect, result);
}

CTEST(hack, uncorrect_hack) {
	char A[8][8];
	int i, j;

	for(i=0; i<8; i++) {
        A[1][i] = 'P';
        A[8-2][i] = 'p';
        for(j=2; j<8-2; j++)
            A[j][i] = ' ';
    }

    A[0][0] = 'R';
    A[0][1] = 'N';
    A[0][2] = 'B';
    A[0][3] = 'Q';
    A[0][4] = 'K';
    A[0][5] = 'B';
    A[0][6] = 'N';
    A[0][7] = 'R';

    A[8-1][0] = 'r';
    A[8-1][1] = 'n';
    A[8-1][2] = 'b';
    A[8-1][3] = 'k';
    A[8-1][4] = 'q';
    A[8-1][5] = 'b';
    A[8-1][6] = 'n';
    A[8-1][7] = 'r';

	int k[4];
	k[0] = 1;
	k[1] = 1;
	k[2] = 1;
	k[3] = 5;
	int result = hack(k[0], k[1], k[2], k[3], A);
	int expect = 0;
	ASSERT_EQUAL(expect, result);
}

int main(int argc, const char** argv)  {
    int test_res = ctest_main(argc, argv);
    return test_res;
}
