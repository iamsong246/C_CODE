#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int check_sys()
//{
//	int a = 1;
//	//返回1，小端
//	//返回0，大端
//	return *(char*)&a;
//}
//int main()
//{
//	//设置一段代码判断我们当前机器是大端存储还是小端存储
//	//返回1，小端
//	//返回0，大端
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* p = &a;
//	*p = 0;
//	return 0;
//}

int main()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("a=%d b=%d c=%d\n", a, b, c);
	return 0;
}