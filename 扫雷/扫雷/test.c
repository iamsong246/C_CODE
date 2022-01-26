#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"



void menu()
{
	printf("*********************************\n");
	printf("*****   1、play    0、exit  *****\n");
	printf("*********************************\n");
}

void test()
{
	srand((unsigned int)time(NULL));
	menu();
	int input = 0;
	do
	{
		printf("请输入：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("即将退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}