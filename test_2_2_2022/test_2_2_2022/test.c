#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int(*p[4])(int, int) = { Add, Sub, Mul, Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", (p[i])(2,2));
//	}
//	return 0;
//
//}
#include<assert.h>
char* my_strcpy(char* str, const char* src)
{
	assert(src != NULL);
	assert(str != NULL);
	char* ret = str;
	while (*str++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[] = "***********";
	char arr2[] = "aaaaaa12aaa";
	char*(*pf)(char*, const char*) = my_strcpy;
	char*(*pfArr[4])(char*, const char*) = {pf,pf,pf,pf};
	//printf("%s\n", pf(arr1, arr2));
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%s\n", pfArr[i](arr1,arr2));
	}
	return 0;
}