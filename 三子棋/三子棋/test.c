#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"


void initborad(char arr[ROW][COL],int x,int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			arr[i][j] = ' ';
		}
	}
}

void displayborad(char board[ROW][COL], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < y - 1)
			{
				printf("|");
			}
			else if (j == y - 1)
			{
				printf("\n");
			}
		}
		if (i < x - 1)
		{
			for (j = 0; j < y; j++)
			{
				printf("---");
				if (j < y - 1)
				{
					printf("|");
				}
				else if (j == y - 1)
				{
					printf("\n");
				}
			}
		}
	}
}

void playermore(char board[ROW][COL], int x, int y)
{
	int i = 0;
	int j = 0;
	printf("玩家走：>（*）\n");
	while (1)
	{
		printf("请输入要下的坐标：");
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= x && j >= 1 && j <= y)
		{
			if (board[i - 1][j - 1] == ' ')
			{
				board[i - 1][j - 1] = '*';
				break;
			}
			else
			{
				printf("已有棋子，重新下\n");

			}
		}
		else
		{
			printf("坐标不合法，请重新输入\n");
		}
	}
}

void computermove(char board[ROW][COL], int x, int y)
{
	int i = 0;
	int j = 0;
	printf("电脑走:>（#）\n");
	while (1)
	{
		i = rand() % x;
		j = rand() % y;
		if (board[i][j] == ' ')
		{
			board[i][j] = '#';
			break;
		}
	}
}

int isfull(char board[ROW][COL], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char iswin(char board[ROW][COL], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for(i = 0; i < y; i++)
	{
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
		return board[0][0];
	if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[2][0] != ' ')
		return board[2][0];

	if (1 == isfull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'c';
}







