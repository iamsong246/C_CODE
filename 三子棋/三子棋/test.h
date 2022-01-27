#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<time.h>

#define ROW 3
#define COL 3

void initborad(char arr[ROW][COL], int x,int y);

void displayborad(char board[ROW][COL], int x, int y );

void playermore(char board[ROW][COL],int x,int y);

void computermove(char board[ROW][COL], int x, int y);

//判断输赢
//玩家赢-‘*’
//电脑赢-‘#’
//平局-‘Q’
//继续-‘C’
char iswin(char board[ROW][COL], int x, int y);