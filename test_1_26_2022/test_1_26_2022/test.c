#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	system("pause");
//	return 0;
//}
//死循环原因，1、栈区按高地址到低地址存放的，i先存放在高地址；
//2、数组元素地址是由高到低的，当循环越界时，随着i变大，arr[i]会地址会和i地址相同，改变arr[i]就相当于改变i

//void my_strcpy(char* arr1, char* arr2)
//{
//	int i = 0;
//	while (1)
//	{
//		if (*(arr2+i) != '\0')
//		{
//			*(arr1 + i) = *(arr2 + i);
//			i++;
//		}
//		else
//		{
//			*(arr1 + i) = *(arr2 + i);
//			break;
//		}
//	}
//}
//void my_strcpy(char* arr1, char* arr2)
//{
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;
//}
//对上面进行优化
//void my_strcpy(char* arr1, char* arr2)
//{
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}//还不够好，当输入为NULL程序会崩掉
/*void my_strcpy(char* arr1, char* arr2)
{
	if (arr1 != NULL && arr2 != NULL)
	{
		while (*arr1++ = *arr2++)
		{
			;
		}
	}
}*///当输入NULL不会报错
#include<assert.h>
//void my_strcpy(char* arr1, char* arr2)
//{
//	assert(arr1 != NULL);//断言，真不报错，假报错
//	assert(arr2 != NULL);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}//在优化
//void my_strcpy(char* arr1,const char* arr2)
//{
//	assert(arr1 != NULL);//断言，真不报错，假报错
//	assert(arr2 != NULL);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}
//
//char* my_strcpy(char* arr1, const char* arr2)
//{
//	char* ret = arr1;
//	assert(arr1 != NULL);//断言，真不报错，假报错
//	assert(arr2 != NULL);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "************";
//	char arr2[] = "bit123";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}


//模拟strlen函数优化版
int my_strlen(const char* ch)
{
	int count = 0;
	assert(ch != NULL);//保证指针的有效性
	while (*ch++ != '\0')
	{
		count++;
	}
	return count;
}
int main()
{
	char ch[] = "abc  defg";
	//int ret = my_strlen(ch);
	printf("%d\n", my_strlen(ch));
	return 0;
}