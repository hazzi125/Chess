#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "func.h"



int check_bishop(int i1, int j1, int i2, int j2) {
bool flag;
    if((i1<9) || (j1<9) || (i2<9) || (j2<9)) {
        if (abs(j2 - j1) == abs(i2 - i1)) {
			flag = 1;  
		}
		else
		    flag = 0;
	}
    else
        flag = 0;

if (flag == 1) return 1; else return 0;
}
