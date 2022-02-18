#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
////声明一个结构体类型
////声明一个学生类型，通过学生类型创建学生变量
////描述学生：名字、电话、年龄、性别
//struct student
//{
//	char name[20];
//	char tele[12];
//	int age[10];
//	char sex[10];
//}s3,s4;//这里是创建结构体全局变量
//struct student s5;//全局变量
//
//int main()
//{
//	//创建结构体变量（临时变量）
//	struct student s1;
//	struct student s2;
//	
//	return 0;
//}

////匿名结构体
//struct
//{
//	int a;
//	int b;
//}x;
//
//struct
//{
//	int a;
//	int b;
//}* psa;
//
////特别注意，虽然上述两个结构体成员变量一样
////但是两个结构体的类型是不一样的
//
//int main()
//{
//	psa = &x;
//	return 0;
//}

////结构体的自引用
//struct Stu
//{
//	int data;
//	//struct Stu Next;
//	//结构体内是不能存放结构体变量的，这样无法得出结构体的内存大小
//	struct Stu* Next;//正确写法
//};

//typedef struct Stu
//{
//	int data;
//	struct Stu* Next;
//}Node;
//struct S1
//{
//	char a;
//	int b;
//	char c;
//};
//struct S2
//{
//	double a;
//	char c;
//	int b;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(s2));
//
//	return 0;
//}

//#pragma pack(4)//设置默认对齐数为4
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//#pragma pack()//取消设置的默认对齐数
//#include<stddef.h>
//int main()
//{
//	struct S s = { 0 };
//	//printf("%d\n", sizeof(s));
//	return 0;
//}


struct S
{
	int l;
	char c;
	int i;
	double d;
};
#include<stddef.h>
int main()
{
	struct S s = { 0 };
	offsetof(struct S, d);//计算结构体成员的偏移量
	printf("%d\n", offsetof(struct S, c));
	printf("%d\n", offsetof(struct S, i));
	printf("%d\n", offsetof(struct S, d));
	printf("%d\n", offsetof(struct S, l));
	//printf("%d\n", sizeof(s));
	return 0;
}