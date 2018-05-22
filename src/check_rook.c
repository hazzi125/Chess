#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "func.h"

extern bool flag;

void check_rook(int i1, int j1, int i2, int j2) {
    if((i1<9) || (j1<9) || (i2<9) || (j2<9)) {
        if((i1 == i2) || (j1 == j2)) {
			flag = 1;  
		}
		else
		    flag = 0;
	}
    else
        flag = 0;
}
