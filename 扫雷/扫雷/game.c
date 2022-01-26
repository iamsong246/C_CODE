#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"




void game()
{
	char ret = 0;
	char show[ROW][COL] = { 0 };
	char hide[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(show,ROW,COL,'*');
	InitBoard(hide, ROW, COL, '0');
	//打印棋盘
	ShowBoard(show, row, col);
	//ShowBoard(hide, row, col);
	//放雷
	place(hide, row, col,num);
	//ShowBoard(hide, row, col);
	//排雷
	demining(hide, show, row, col);

}

void InitBoard(char board[ROW][COL], int x, int y, char z)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			board[i][j] = z;
		}
	}
}

void ShowBoard(char board[ROW][COL], int x, int y)
{
	int i = 0;
	int j = 0;
	for (j = 0; j <= x; j++)
	{
		printf(" %d ", j);
	}
	printf("\n");
	for (i = 0; i < x; i++)
	{
		printf(" %d ", i+1);
		for (j = 0; j < y; j++)
		{
			printf(" %c ", board[i + 1][j + 1]);
		}
		printf("\n");
	}
}

void place(char board[ROW][COL], int x, int y, int z)
{
	while (z>0)
	{
		while (1)
		{
			int i = rand() % x + 1;
			int j = rand() % y + 1;
			if (board[i][j] == '0')
			{
				board[i][j] = 'B';
				break;
			}
		}
		z--;
	}
}

void demining(char hide[ROW][COL], char show[ROW][COL],int x,int y)
{
	int win = 0;
	int i = 0;
	int j = 0;
	while (win<(x*y-num))
	{
		printf("请输入坐标：>");
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= x&&j >= 1 && j <= y)
		{

			if (hide[i][j] == 'B')//雷
			{
				printf("您已被炸死，请重新开始游戏或退出\n");
				ShowBoard(hide, row, col);
				break;
			}
			else//不是雷
			{
				//判断雷的数量，并扩展，使用递归
				judge(hide,show,i,j,row,col);
				judge1(hide, show, i, j, row, col);
				judge2(hide, show, i, j, row, col);
				ShowBoard(show, row, col);
				win++;
			}
		}
		else
			printf("输入的坐标不合法，请重新输入\n");
	}
	if (win == (x*y - num))
	{
		printf("恭喜你，赢得游戏\n");
	}
}

void judge(char board1[ROW][COL], char board2[ROW][COL], int i, int j,int a,int b)
{
	int count = 0;
	if (board1[i - 1][j] == 'B')
		count++; 
	if (board1[i - 1][j-1] == 'B')
		count++;
	if (board1[i - 1][j + 1] == 'B')
		count++;
	if (board1[i ][j - 1] == 'B')
		count++;
	if (board1[i][j + 1] == 'B')
		count++;
	if (board1[i + 1][j - 1] == 'B')
		count++;
	if (board1[i + 1][j + 1] == 'B')
		count++;
	if (board1[i +1][j] == 'B')
		count++;
	board2[i][j] = count + '0';
	if (count == 0)
	{
		board2[i][j] = ' ';
		if (i + 1 >= 1 && i + 1 <= a&&j + 1 >= 1 && j + 1 <= b)
			judge(board1, board2, i+1, j+1,row,col);
		if (i  >= 1 && i  <= a&&j + 1 >= 1 && j + 1 <= b)
			judge(board1, board2, i , j + 1, row, col);
		if (i-1 >= 1 && i-1 <= a&&j +1 >= 1 && j +1 <= b)
			judge(board1, board2, i-1, j+1 , row, col);
		if (i + 1 >= 1 && i + 1 <= a&&j >= 1 && j <= b)
			judge(board1, board2, i + 1, j, row, col);
		/*if (i-1  >= 1 && i -1 <= a&&j >= 1 && j <= b)
			judge(board1, board2, i-1 , j, row, col);*/
	}
}

void judge1(char board1[ROW][COL], char board2[ROW][COL], int i, int j, int a, int b)
{
	int count = 0;
	if (board1[i - 1][j] == 'B')
		count++;
	if (board1[i - 1][j - 1] == 'B')
		count++;
	if (board1[i - 1][j + 1] == 'B')
		count++;
	if (board1[i][j - 1] == 'B')
		count++;
	if (board1[i][j + 1] == 'B')
		count++;
	if (board1[i + 1][j - 1] == 'B')
		count++;
	if (board1[i + 1][j + 1] == 'B')
		count++;
	if (board1[i + 1][j] == 'B')
		count++;
	board2[i][j] = count + '0';
	if (count == 0)
	{
		board2[i][j] = ' ';
		if (i -1 >= 1 && i - 1 <= a&&j - 1 >= 1 && j - 1 <= b)
			judge1(board1, board2, i - 1, j - 1, row, col);
		if (i >= 1 && i <= a&&j - 1 >= 1 && j - 1 <= b)
			judge1(board1, board2, i, j - 1, row, col);
		if (i + 1 >= 1 && i + 1 <= a&&j - 1 >= 1 && j - 1 <= b)
			judge1(board1, board2, i + 1, j-1, row, col);
	}
}

void judge2(char board1[ROW][COL], char board2[ROW][COL], int i, int j, int a, int b)
{
	int count = 0;
	if (board1[i - 1][j] == 'B')
		count++;
	if (board1[i - 1][j - 1] == 'B')
		count++;
	if (board1[i - 1][j + 1] == 'B')
		count++;
	if (board1[i][j - 1] == 'B')
		count++;
	if (board1[i][j + 1] == 'B')
		count++;
	if (board1[i + 1][j - 1] == 'B')
		count++;
	if (board1[i + 1][j + 1] == 'B')
		count++;
	if (board1[i + 1][j] == 'B')
		count++;
	board2[i][j] = count + '0';
	if (count == 0)
	{
		board2[i][j] = ' ';
		if (i-1  >= 1 && i -1 <= a&&j >= 1 && j <= b)
		judge2(board1, board2, i-1 , j, row, col);
	}
}
