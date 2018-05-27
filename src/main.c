#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "func.h"

//const int n=8;

int main() {  
 
    int i1, j1, i2, j2;
    int i,j;
    char A[8][8];
    bool flag;
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
 /*   if((A[i1][j1] == 'p') || (A[i1][j1] == 'P')) 
	        flag = check_pawn(i1, j1, i2, j2, A);*/
		if(A[i1][j1] == 'P')
		    flag = check_pawn(i1, j1, i2, j2);

		if(A[i1][j1] == 'p')
		    flag = check_pawn2(i1, j1, i2, j2);

	    if((A[i1][j1] == 'r') || (A[i1][j1] == 'R')) 
	        flag = check_rook(i1, j1, i2, j2);  

		if((A[i1][j1] == 'n') || (A[i1][j1] == 'N')) 
	        flag = check_knight(i1, j1, i2, j2); 
 
	    if((A[i1][j1] == 'b') || (A[i1][j1] == 'B')) 
	        flag = check_bishop(i1, j1, i2, j2);
    
		if((A[i1][j1] == 'q') || (A[i1][j1] == 'Q')) 
	        flag = check_queen(i1, j1, i2, j2); 

		if((A[i1][j1] == 'k') || (A[i1][j1] == 'K')) 
	        flag = check_king(i1, j1, i2, j2);    
	    
		if(flag == 1)
		    if(A[i2][j2] != ' ')
		    	flag = hack(i1, j1, i2, j2, A);
		    	
	    if(flag == 1) {
	        if((A[i2][j2] == 'k') || (A[i2][j2]) == 'K')
	            win = true;
	
	        A[i2][j2] = A[i1][j1];
	        A[i1][j1] = ' ';
	    }
	    system("clear");
    } while(win != true);
    system("clear");

    printf("\n");
    return 0;
    }


