#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

////创建一个结构体类型-struct stu
//struct stu
//{
//	//成员
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	//使用struct stu创建一个对象并初始化
//	struct stu si = { "张三", 20, "20200119" };
//	printf("%s\n", si.name);
//	printf("%s\n", si.id);
//	printf("%d\n", si.age);
//	struct stu* ps = &si;
//	printf("%s\n", (*ps).name);//太啰嗦
//	printf("%s\n", ps->name);//与上面等价
//	//结构体指针 -> 成员名
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//3整型的二进制：00000000000000000000000000000011
//	//存入字符类型，1byte8个bite，需要截断，从最低位开始：
//	//a - 00000011
//	char b = 127;
//	//00000000000000000000000001111111
//	//b - 01111111
//
//	//a 和 b 相加，由于是字符类型，需要整型提升，整形提升是按照变量的数据类型的符号位来提升的
//	//a：00000000000000000000000000000011
//	//b：00000000000000000000000001111111
//	//二进制相加：00000000000000000000000010000010
//	//存入字符类型，又需要截断：
//	//c - 10000010
//	char c = a + b;
//
//	//打印%d为打印整型，需要整型提升
//	//11111111111111111111111110000010 - 内存为补码，打印需要转化成原码
//	//11111111111111111111111110000001 - 反码
//	//10000000000000000000000001111110 - 原码，换成十进制为-126
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	char a = 0;
//	printf("%d\n", sizeof(+a));
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	//int* pc = &a;
//	//*pc = 0;
//	char* pa = &a;
//	*pa = 0;
//	//printf("%p\n", pc);
//	//printf("%p\n", pa);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;//数组首元素地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

