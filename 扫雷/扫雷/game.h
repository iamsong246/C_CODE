#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<time.h>




#define ROW 11
#define COL 11
#define row ROW-2
#define col COL-2
#define num 9




void game();
void InitBoard(char board[ROW][COL], int x, int y, char z);
void ShowBoard(char board[ROW][COL], int x, int y);
void place(char board[ROW][COL],int x,int y,int z);
void demining(char hide[ROW][COL], char show[ROW][COL],int x,int y);
void judge(char board1[ROW][COL],char board2[ROW][COL], int i,int j,int a,int b);
void judge1(char board1[ROW][COL], char board2[ROW][COL], int i, int j, int a, int b);
void judge2(char board1[ROW][COL], char board2[ROW][COL], int i, int j, int a, int b);