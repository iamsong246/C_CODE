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


//浮点数在内存中的存储方法
//9
//1001.0
//(-1)^0 * 1.001 * 2^3
//(-1)^s * M * 2^E
//0.5
//(-1)^1 * 1.0 * 2^(-1)
//对于32位的浮点数，最高的1位是符号位s，接着的8位是指数E，剩下的23位为有效数字M
//对于64位的浮点数，最高的1位是符号位S，接着的11位是指数E，剩下的52位为有效数字M
//对于S，正数为0，负数为1
//对于M，计算机中只存储小数点后的数据，上述M存001
//对于E为无符号数，小数点往左移为正，往右移为负，
//从上述算得的值+（float为127）（double为1023）得E值，比如3+127得E为130
//float f = 5.5;
//101.1
//(-1)^0 * 1.011 * 2^2
//S = 0 , M = 1.011 E =2+127
//二进制中存储：0 10000001 01100000000000000000000
int main()
{
	int n = 9;
	float *pFloat = (float *)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}