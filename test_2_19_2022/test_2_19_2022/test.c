#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




////λ��-������λ
//struct S
//{
//	int a : 2;//��ʾaռ2������λ
//	//ռ�õı���λ���ܳ���λ��
//	//��a����int���Ϳ��ٵĿռ䣬һ�ο���4���ֽڣ�32������λ�����Բ��ܳ���32������λ��
//	int b : 5;//��ʾbռ5������λ
//	int c : 10;//��ʾcռ10������λ
//	int d : 30;//��ʾdռ30������λ
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

////ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ-����
//	Male,//0
//	Female,//1
//	Secret//2
//};
//
//int main()
//{
//	enum Sex s = Male;
//	printf("%d %d %d\n", Male, Female, Secret);
//	return 0;
//}

//union U
//{
//	char a;
//	int b;
//	int c;
//};
//
//int main()
//{
//	union U u;
//	printf("%p\n", &u);
//	printf("%p\n", &(u.a));
//	printf("%p\n", &(u.b));
//	printf("%p\n", &(u.c));
//
//	return 0;
//}

//ʹ���������жϴ�С��ģʽ

int check_sys()
{
	union U
	{
		char a;
		int b;
	}u;
	u.b = 1;
	return u.a;
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��ģʽ\n");
	}
	else
	{
		printf("���ģʽ\n");
	}
	return 0;
}

