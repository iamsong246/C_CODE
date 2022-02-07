#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr[3][4] = { 0 };
//	printf("%d\n", sizeof(arr[0] + 1));
//	printf("%d\n", sizeof(arr[4]));
//	//sizeof括号里不参与计算机的真实运算，计算机只是把它当成第五行数组计算内存的大小
//
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int* p = (int*)(&arr + 1);//(&arr+1)是数组指针，类型为（* ）[5]，然后进行强制类型转换成int*
//	printf("%d %d\n", *(arr + 1), *(p - 1));
//	return 0;
//}

//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	int* str1 = (int*)(&a + 1);
//	int* str2 = (int*)((int)a + 1);
//	printf("%x %x\n", str1[-1], *str2);
//	return 0;
//}

//int main()
//{
//	int arr[3][2] = { (0, 1), (2, 3 ), (4, 5 ) };
//	int* p;
//	p = arr[0];
//	printf("%d", p[0]);
//	return 0;
//}

