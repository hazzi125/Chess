#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "func.h"

char A[8][8];
bool flag; 

void hack(int i1, int j1, int i2, int j2) {
    if(A[i2][j2] != ' ') {
        if((A[i1][j1] == 'p') || (A[i1][j1] == 'r') || (A[i1][j1] == 'n') || (A[i1][j1] == 'b') || (A[i1][j1] == 'k') || (A[i1][j1] == 'q')) {
            if((A[i2][j2] == 'P') || (A[i2][j2] == 'R') || (A[i2][j2] == 'N') || (A[i2][j2] == 'B') || (A[i2][j2] == 'K') || (A[i2][j2] == 'Q')) 
                flag = 1;
	    else
		flag = 0;
        }
        else {
            if((A[i2][j2] == 'p') || (A[i2][j2] == 'r') || (A[i2][j2] == 'n') || (A[i2][j2] == 'b') || (A[i2][j2] == 'k') || (A[i2][j2] == 'q')) 
	        flag = 1;
            else
		flag = 0;
        }
    }
}
