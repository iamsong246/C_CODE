#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	//д�ļ�
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	//FILE* pf = fopen("test.txt", "r");
//	//if (pf == NULL)
//	//{
//	//	printf("%s\n", strerror(errno));
//	//}
//	////���ļ�
//	//int ch = fgetc(pf);
//	//printf("%c", ch);
//	//ch = fgetc(pf);
//	//printf("%c", ch);
//	//ch = fgetc(pf);
//	//printf("%c", ch);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("..\\test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	char ch[1024] = {0};
//	fgets(ch,1024,pf);
//	printf("%s", ch);//����fgetsȡ���ļ����ַ���������Ϊ���л����'\n'����ӡ�������Զ����У����ǵ����һ��û��'\n'
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("..\\test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	char ch[1024] = "hello world";
//	fputs(ch, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("..\\test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//��ʽ����ʽд�ļ�
//	char str[] = "˧��";
//	fprintf(pf, "����%s\n",str);
//
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

struct S
{
	int a;
	double b;
	char ch[10];
};

//int main()
//{
//	struct S s = { 10,3.14,"abcd" };
//	FILE* pf = fopen("..\\test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//��ʽ����ʽд�ļ�
//	fprintf(pf, "%d %f %s", s.a, s.b, s.ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	struct S s = {0};
	FILE* pf = fopen("..\\test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//��ʽ����ʽ���ļ�
	fscanf(pf, "%d %lf %s", &(s.a), &(s.b), s.ch);
	printf("%d %.2lf %s\n", s.a, s.b, s.ch);

	fclose(pf);
	pf = NULL;
	return 0;
}