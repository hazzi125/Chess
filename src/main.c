#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "func.h"

//const int n=8;
char A[8][8];
bool flag=1;

int main() {  
 
    int i1, j1, i2, j2;
    int i,j;

    for(i=0; i<8; i++) { //n=8
        A[1][i] = 'P';
        A[8-2][i] = 'p'; //n=8
        for(j=2; j<8-2; j++) //n=8
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

    A[8-1][0] = 'r'; //all n=8
    A[8-1][1] = 'n';
    A[8-1][2] = 'b';
    A[8-1][3] = 'k';
    A[8-1][4] = 'q';
    A[8-1][5] = 'b';
    A[8-1][6] = 'n';
    A[8-1][7] = 'r';
    bool win = false;
    do {
    // PrintBoard(A);
	flag = 1;
        printf("  | 1 2 3 4 5 6 7 8\n--|----------------\n");
        for(i=0; i<8; i++) { //n=8
        printf("%d | ", i+1);
        for(j=0; j<8; j++) //n=8
        printf("%c ", A[i][j]);
        printf("\n");
    }
    printf("\n");

  //  char c1[2], c2[2];
    
    scanf("%d", &j1);
    scanf("%d", &i1);
    scanf("%d", &j2);
    scanf("%d", &i2);
    
    i1--; j1--; i2--; j2--;
    if(A[i1][j1] != ' ') {
        check_pawn(i1, j1, i2, j2);
	if(flag == 1)
	    hack(i1, j1, i2, j2);
        if(flag == 1) {

            if((A[i2][j2] == 'k') || (A[i2][j2]) == 'K')
            win = true;

            A[i2][j2] = A[i1][j1];
            A[i1][j1] = ' ';
        }
    }
    system("clear");
    } while(win!=true);
    system("clear");

    printf("\n");
    return 0;
    }


