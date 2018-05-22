#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "func.h"

extern bool flag;

void check_bishop(int i1, int j1, int i2, int j2) {
    if((i1<9) || (j1<9) || (i2<9) || (j2<9)) {
        if (abs(j2 - j1) == abs(i2 - i1)) {
			flag = 1;  
		}
		else
		    flag = 0;
	}
    else
        flag = 0;
}
