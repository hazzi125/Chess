#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "func.h"



int check_rook(int i1, int j1, int i2, int j2) {
bool flag;
    if((i1<9) || (j1<9) || (i2<9) || (j2<9)) {
        if((i1 == i2) || (j1 == j2)) {
			flag = 1;  
		}
		else
		    flag = 0;
	}
    else
        flag = 0;
if (flag == 1) return 1; else return 0;
}
