#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
////����һ���ṹ������
////����һ��ѧ�����ͣ�ͨ��ѧ�����ʹ���ѧ������
////����ѧ�������֡��绰�����䡢�Ա�
//struct student
//{
//	char name[20];
//	char tele[12];
//	int age[10];
//	char sex[10];
//}s3,s4;//�����Ǵ����ṹ��ȫ�ֱ���
//struct student s5;//ȫ�ֱ���
//
//int main()
//{
//	//�����ṹ���������ʱ������
//	struct student s1;
//	struct student s2;
//	
//	return 0;
//}

////�����ṹ��
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
////�ر�ע�⣬��Ȼ���������ṹ���Ա����һ��
////���������ṹ��������ǲ�һ����
//
//int main()
//{
//	psa = &x;
//	return 0;
//}

////�ṹ���������
//struct Stu
//{
//	int data;
//	//struct Stu Next;
//	//�ṹ�����ǲ��ܴ�Žṹ������ģ������޷��ó��ṹ����ڴ��С
//	struct Stu* Next;//��ȷд��
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

//#pragma pack(4)//����Ĭ�϶�����Ϊ4
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶�����
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
	offsetof(struct S, d);//����ṹ���Ա��ƫ����
	printf("%d\n", offsetof(struct S, c));
	printf("%d\n", offsetof(struct S, i));
	printf("%d\n", offsetof(struct S, d));
	printf("%d\n", offsetof(struct S, l));
	//printf("%d\n", sizeof(s));
	return 0;
}