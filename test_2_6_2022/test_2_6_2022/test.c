#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


//实现qsort函数
void change(char* e1,char* e2,int w)
{
	int i = 0;
	for (i = 0; i < w; i++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;//本人没想到这里，转换后地址需要++
		e2++;
	}
}

void qsort_my(void* arr,int sz,int w,int(*cmp)(const void*e1,const void*e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int num = 0;
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)arr + j*w, (char*)arr + (j + 1)*w)>0)
			{
				change((char*)arr + j*w, (char*)arr + (j + 1)*w,w);
				num++;
			}
		}
		if (num == 0)
		{
			break;
		}
	}
}

int int_my(const void*e1,const void*e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test()
{
	int arr[] = { 3, 2, 1, 4, 5, 6, 8, 4, 5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort_my(arr,sz,sizeof(arr[0]),int_my);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	test();

	return 0;
}

