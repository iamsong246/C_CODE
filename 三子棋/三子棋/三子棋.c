#define _CRT_SECURE_NO_WARNINGS 1

#include"test.h"




void menu()
{
	printf("*************************\n");
	printf("****1��play  0��exit*****\n");
	printf("*************************\n");
}

void game()
{
	char ret = 0;
	//��������
	char board[ROW][COL] = { 0 };
	//��ʼ������
	initborad(board, ROW, COL);
	//��ӡ����
	displayborad(board,ROW,COL);
	//����
	while (1)
	{
		//�������
		playermore(board,ROW,COL);
		displayborad(board, ROW, COL);

		//�ж���Ӯ
		ret = iswin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}

		//��������
		computermove(board, ROW, COL);
		displayborad(board, ROW, COL);

		//�ж���Ӯ
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}

}

void test()
{
	srand((unsigned int) time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}





