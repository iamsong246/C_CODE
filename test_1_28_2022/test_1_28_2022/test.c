#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int check_sys()
//{
//	int a = 1;
//	//����1��С��
//	//����0�����
//	return *(char*)&a;
//}
//int main()
//{
//	//����һ�δ����ж����ǵ�ǰ�����Ǵ�˴洢����С�˴洢
//	//����1��С��
//	//����0�����
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* p = &a;
//	*p = 0;
//	return 0;
//}

int main()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf("a=%d b=%d c=%d\n", a, b, c);
	return 0;
}