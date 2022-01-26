#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"




void game()
{
	char ret = 0;
	char show[ROW][COL] = { 0 };
	char hide[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(show,ROW,COL,'*');
	InitBoard(hide, ROW, COL, '0');
	//��ӡ����
	ShowBoard(show, row, col);
	//ShowBoard(hide, row, col);
	//����
	place(hide, row, col,num);
	//ShowBoard(hide, row, col);
	//����
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
		printf("���������꣺>");
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= x&&j >= 1 && j <= y)
		{

			if (hide[i][j] == 'B')//��
			{
				printf("���ѱ�ը���������¿�ʼ��Ϸ���˳�\n");
				ShowBoard(hide, row, col);
				break;
			}
			else//������
			{
				//�ж��׵�����������չ��ʹ�õݹ�
				judge(hide,show,i,j,row,col);
				judge1(hide, show, i, j, row, col);
				judge2(hide, show, i, j, row, col);
				ShowBoard(show, row, col);
				win++;
			}
		}
		else
			printf("��������겻�Ϸ�������������\n");
	}
	if (win == (x*y - num))
	{
		printf("��ϲ�㣬Ӯ����Ϸ\n");
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
