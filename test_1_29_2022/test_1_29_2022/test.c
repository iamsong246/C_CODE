#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a = -20;
//	unsigned int b = 10;
//	printf("%d\n", a + b);
//	return 0;
//}
//#include<Windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//		
//	}
//	printf("%d", strlen(a));
//	return 0;
//}


//���������ڴ��еĴ洢����
//9
//1001.0
//(-1)^0 * 1.001 * 2^3
//(-1)^s * M * 2^E
//0.5
//(-1)^1 * 1.0 * 2^(-1)
//����32λ�ĸ���������ߵ�1λ�Ƿ���λs�����ŵ�8λ��ָ��E��ʣ�µ�23λΪ��Ч����M
//����64λ�ĸ���������ߵ�1λ�Ƿ���λS�����ŵ�11λ��ָ��E��ʣ�µ�52λΪ��Ч����M
//����S������Ϊ0������Ϊ1
//����M���������ֻ�洢С���������ݣ�����M��001
//����EΪ�޷�������С����������Ϊ����������Ϊ����
//��������õ�ֵ+��floatΪ127����doubleΪ1023����Eֵ������3+127��EΪ130
//float f = 5.5;
//101.1
//(-1)^0 * 1.011 * 2^2
//S = 0 , M = 1.011 E =2+127
//�������д洢��0 10000001 01100000000000000000000
int main()
{
	int n = 9;
	float *pFloat = (float *)&n;
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	return 0;
}