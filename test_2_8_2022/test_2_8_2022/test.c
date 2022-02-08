#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//指针相减得到的是中间的元素个数，打印%p是打印补码的十六进制位
//	return 0;
//}

//int main()
//{
//	char* a[] = { "abcdefg", "at", "alibababa" };
//	char* *p = a;
//	p++;
//	printf("%s\n", *p);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("%d\n", sizeof(++a));
//	printf("%d\n", a);
//	printf("%d\n", a);
//
//	return 0;
//}

//逆序一个字符串
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//void change_str(char*a, int ret)
//{
//	assert(a);
//	int i = 0;
//	while ((a+i)<(a+ret-1-i))
//	{
//			char tmp = *(a + i);
//			*(a + i) = *(a + ret - 1 - i);
//			*(a + ret - 1 - i) = tmp;
//			i++;
//	}
//}
//int main()
//{
//	char a[256] = { 0 };
//	gets(a);
//	int ret = strlen(a);
//	change_str(a,ret);
//	printf("%s\n", a);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);//2  5
//	int i = 0;
//	int ret = 0;
//	int sum = 0;
//	//2 22 222 2222 22222
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//double pow(int x, int y)
//{
//	if (y > 0)
//		return x*pow(x, y-1);
//	else if (y == 0)
//		return 1.0;
//	else
//		return 1.0 / x*pow(x, y+1);
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	//pow(x, y);
//	printf("%lf\n", pow(x, y));
//	return 0;
//}

//打印棱形
void test()
{
	int n = 0;
	scanf("%d", &n);
	//打印上半部分
	int i = 0;
	for (i = 0; i < n; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j < n-1-i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2*i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下半部分
	for (i = 0; i < n-1; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j <=i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * (n-1-i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	test();
	return 0;
}