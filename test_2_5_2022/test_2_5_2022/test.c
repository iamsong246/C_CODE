#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//void Bubble(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int num = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int imp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = imp;
//				num++;
//			}
//		}
//		if (num == 0)//如果某次循环已经升序，跳出
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 7, 6, 8, 5, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//使用qsort库函数排序
int cmp_int(const void* e1,const void* e2)
{
	return *(int*)e1 - *(int*)e2;//void*不能解引用，可以强制转化，排序方法按小到大
}

int cmp_f(const void* e1, const void* e2)
{
	return (int)(*(float*)e1 - *(float*)e2);
	/*if (*(float*)e1 == *(float*)e2)
	{
		return 0;
	}
	else if (*(float*)e1 < *(float*)e2)
	{
		return -1;
	}
	else
		return 1;*/
}

void test1()
{
	int arr[] = { 0, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void test2()
{
	float f[] = { 1.0, 9.0, 4.0, 5.0, 2.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_f);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
}


struct stu
{
	char name[20];
	int age;
};

int cmp_str(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}

void test3()
{
	struct stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 15 } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s,sz,sizeof(s[0]),cmp_str);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ", s[i].name);
	}
}

int main()
{
	//test1();
	test2();
	test3();
	return 0;
}