#define _CRT_SECURE_NO_WARNINGS 1

#include"test.h"




void menu()
{
	printf("*************************\n");
	printf("****1、play  0、exit*****\n");
	printf("*************************\n");
}

void game()
{
	char ret = 0;
	//创建数组
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	initborad(board, ROW, COL);
	//打印棋盘
	displayborad(board,ROW,COL);
	//下棋
	while (1)
	{
		//玩家下棋
		playermore(board,ROW,COL);
		displayborad(board, ROW, COL);

		//判断输赢
		ret = iswin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}

		//电脑下棋
		computermove(board, ROW, COL);
		displayborad(board, ROW, COL);

		//判断输赢
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}

}

void test()
{
	srand((unsigned int) time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}





