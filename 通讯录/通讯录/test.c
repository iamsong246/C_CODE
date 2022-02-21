#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void menu()
{
	printf("*******          通讯录        ***************\n");
	printf("******* 1、添加        2、删除 ***************\n");
	printf("******* 3、查找        4、修改 ***************\n");
	printf("******* 5、显示        6、排序 ***************\n");
	printf("******* 0、退出                ***************\n");
	printf("**********************************************\n");
}
int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;//里面包含1000个通讯录，还有已添加的个数
	//初始化通讯录
	init_Contact(&con);
	do
	{
		menu();
		printf("请输入：>");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			//添加通讯录信息
			AddContact(&con);
			break;
		case del:
			//删除通讯录信息
			DelContact(&con);
			break;
		case find:
			//查找通讯录信息
			FindContact(&con);
			break;
		case modify:
			//修改通讯录信息
			ModifyContact(&con);
			break;
		case show:
			//显示通讯录信息
			ShowContact(&con);
			break;
		case sort:
			//给通讯录指定信息排序
			SortContact(&con);
			break;
		case Exit:
			printf("退出程序\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}


