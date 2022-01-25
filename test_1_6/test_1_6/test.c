#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int i = 1;
//	for (i; i <= 10; i++)
//	{
//		if (i == 6)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i=0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i; i < 10; i++)
//		printf("%d ", arr[i]);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//		printf("hehe ");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (6 == i)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	switch (a)
//	{
//	case 1:
//		printf("星期一\n", a);
//		break;
//	default:
//		printf("输错啦\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("hehe\n");
//		i++;
//	} 
//	while (i < 10);
//	return 0;
//}

//计算n的阶乘
//int main()
//{
//	int n = 0;
//	int b = 1;
//	int max = 1;
//	scanf("%d", &n);	
//	for (b=1; b <= n; b++)
//		max = max * b;
//	
//	printf("该值的阶乘为%d\n", max);
//
//	return 0;
//}


//计算1！+2！+。。。+10！
//int main()
//{
//	int n = 0;
//	int b = 1;
//	int a = 1;
//	int max = 1;
//	int max1 = 0;
//	scanf("%d", &n);
//	printf("n的值为%d\n", n);
//	for (a=1; a <= n; a++)
//	{
//		max = 1;//max初始化
//		for (b=1; b <= a; b++)
//		{
//			max = max * b;
//		}
//		max1 = max + max1;
//	}
//	/*for (a=1; a <= n; a++)
//	{
//		max = max * a;           (优化）
//		max1 = max + max1;
//	}*/
//	printf("n阶乘的和为%d\n", max1);
//
//	return 0;
//}


//在一个有序数组中查找具体的某个数字n
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 10;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);//效率太慢
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//折半查找算法，二分查找算法
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while(left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("找不到了\n");
//		}
//			
//	}
//	return 0;
//}

//编写代码，演示多个字符从两端移动，向中间汇聚。
#include <Windows.h>
#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit !!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1; //int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);//每打印一次停留一秒，使用Windows.h
//		system("cls");//执行系统命令的一个函数，使用stdlib.h
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
// 编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//提示登录成，如果三次均输入错误，则退出程序。
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:> ");
		scanf("%s", &password);
		if (strcmp(password, "123456") == 0)//判断字符串是否相等使用库函数strcmp
		{
			printf("密码正确\n");
			break;
		}
		else
		{
			printf("密码错误，再试一次\n");
		}
		Sleep(1000);
		system("cls");

	}
	if (3 == i)
	{
		printf("密码错误，即将退出程序\n");
	}
	return 0;
}