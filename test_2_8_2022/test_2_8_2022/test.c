#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//ָ������õ������м��Ԫ�ظ�������ӡ%p�Ǵ�ӡ�����ʮ������λ
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

//����һ���ַ���
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

//��ӡ����
void test()
{
	int n = 0;
	scanf("%d", &n);
	//��ӡ�ϰ벿��
	int i = 0;
	for (i = 0; i < n; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < n-1-i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2*i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//��ӡ�°벿��
	for (i = 0; i < n-1; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j <=i; j++)
		{
			printf(" ");
		}
		//��ӡ*
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