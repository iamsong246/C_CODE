#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"



void menu()
{
	printf("*********************************\n");
	printf("*****   1��play    0��exit  *****\n");
	printf("*********************************\n");
}

void test()
{
	srand((unsigned int)time(NULL));
	menu();
	int input = 0;
	do
	{
		printf("�����룺>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�����˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}