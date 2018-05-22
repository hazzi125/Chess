#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "func.h"

extern bool flag;

void check_queen(int i1, int j1, int i2, int j2) {
	if((i1<9) || (j1<9) || (i2<9) || (j2<9)) {
    	check_rook(i1, j1, i2, j2);
    	if(flag == 0)
        	check_bishop(i1, j1, i2, j2);
	}
}
