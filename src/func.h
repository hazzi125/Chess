#ifndef H_PROJECT
#define H_PROJECT
#include<stdbool.h>

//static char A[8][8];

int check_pawn(int i1, int j1, int i2, int j2, char A[8][8]);
int hack(int i1, int j1, int i2, int j2, char A[8][8]);
int check_rook(int i1, int j1, int i2, int j2);
int check_knight(int i1, int j1, int i2, int j2);
int check_queen(int i1, int j1, int i2, int j2);
int check_bishop(int i1, int j1, int i2, int j2);
int check_king(int i1, int j1, int i2, int j2);
#endif
