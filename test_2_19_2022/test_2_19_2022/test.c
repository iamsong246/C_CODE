#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




////位段-二进制位
//struct S
//{
//	int a : 2;//表示a占2个比特位
//	//占用的比特位不能超过位域
//	//（a是以int类型开辟的空间，一次开辟4个字节，32个比特位，所以不能超过32个比特位）
//	int b : 5;//表示b占5个比特位
//	int c : 10;//表示c占10个比特位
//	int d : 30;//表示d占30个比特位
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

////枚举类型
//enum Sex
//{
//	//枚举的可能取值-常量
//	Male,//0
//	Female,//1
//	Secret//2
//};
//
//int main()
//{
//	enum Sex s = Male;
//	printf("%d %d %d\n", Male, Female, Secret);
//	return 0;
//}

//union U
//{
//	char a;
//	int b;
//	int c;
//};
//
//int main()
//{
//	union U u;
//	printf("%p\n", &u);
//	printf("%p\n", &(u.a));
//	printf("%p\n", &(u.b));
//	printf("%p\n", &(u.c));
//
//	return 0;
//}

//使用联合体判断大小端模式

int check_sys()
{
	union U
	{
		char a;
		int b;
	}u;
	u.b = 1;
	return u.a;
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端模式\n");
	}
	else
	{
		printf("大端模式\n");
	}
	return 0;
}

