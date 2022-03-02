#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//#define square(x) (x)*(x)//宏
//
//int main()
//{
//	//int ret = square(5);//5*5
//	//printf("ret = %d\n", ret);
//	int ret = square(5 + 1);
//	printf("%d", ret);
//	return 0;
//}


//int main()
//{
//	printf("the value of xx is\n");
//	printf("the value ""of xx is\n");
//	printf("the ""value of ""xx is\n");
//	return 0;
//}

//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//
//int main()
//{
//	int a = 10;
//	int b = 10;
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}

//#define CAT(X,Y) X##Y
//int main()
//{
//	char ab[] = "我是帅哥";
//	printf("%s\n", ab);
//	printf("%s\n", CAT(a,b));
//	return 0;
//}

//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	printf("max=%d\n", max);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}

//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	//可以使用宏来简化
//	int* pc = MALLOC(10, int);
//	return 0;
//}
//
//#define A 100
//#define B 200
//int main()
//{
//	int ret = A + B;
//#undef A
//	ret = A + B;
//	return 0;
//}


////#define DEBUG
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);//为了观察arr赋值是否成功
//#endif
//	}
//	return 0;
//}