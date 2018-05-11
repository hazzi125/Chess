#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "func.h"

bool flag;

void check_pawn(int i1, int j1, int i2, int j2) {
char A[8][8];
        if((i1<9) || (j1<9) || (i2<9) || (j2<9)) {
            if(A[i1][j1] == 'p') {
                if( ((i2 == i1-1) || (i2 == i1-2)) && (j1 == j2))
                    flag = 1;
                else
                    flag = 0;
            }


            if(A[i1][j1] == 'P') {
                if( ((i2 == i1+1) || (i2 == i1+2)) && (j1 == j2))
                    flag = 1;
                else
                    flag = 0;
            }
        }
        else
            flag = 0;
}
