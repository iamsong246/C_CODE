#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void menu()
{
	printf("*******          ͨѶ¼        ***************\n");
	printf("******* 1�����        2��ɾ�� ***************\n");
	printf("******* 3������        4���޸� ***************\n");
	printf("******* 5����ʾ        6������ ***************\n");
	printf("******* 0���˳�                ***************\n");
	printf("**********************************************\n");
}
int main()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;//�������1000��ͨѶ¼����������ӵĸ���
	//��ʼ��ͨѶ¼
	init_Contact(&con);
	do
	{
		menu();
		printf("�����룺>");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			//���ͨѶ¼��Ϣ
			AddContact(&con);
			break;
		case del:
			//ɾ��ͨѶ¼��Ϣ
			DelContact(&con);
			break;
		case find:
			//����ͨѶ¼��Ϣ
			FindContact(&con);
			break;
		case modify:
			//�޸�ͨѶ¼��Ϣ
			ModifyContact(&con);
			break;
		case show:
			//��ʾͨѶ¼��Ϣ
			ShowContact(&con);
			break;
		case sort:
			//��ͨѶ¼ָ����Ϣ����
			SortContact(&con);
			break;
		case Exit:
			printf("�˳�����\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}


