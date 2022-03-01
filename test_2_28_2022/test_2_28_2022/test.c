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
//	//写文件
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	//FILE* pf = fopen("test.txt", "r");
//	//if (pf == NULL)
//	//{
//	//	printf("%s\n", strerror(errno));
//	//}
//	////读文件
//	//int ch = fgetc(pf);
//	//printf("%c", ch);
//	//ch = fgetc(pf);
//	//printf("%c", ch);
//	//ch = fgetc(pf);
//	//printf("%c", ch);
//	//关闭文件
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
//	printf("%s", ch);//由于fgets取出文件的字符串后面因为换行会带有'\n'，打印出来会自动换行，但是到最后一行没有'\n'
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
//	//写文件
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
//	//格式化形式写文件
//	char str[] = "帅哥";
//	fprintf(pf, "我是%s\n",str);
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
//	//格式化形式写文件
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
	//格式化形式读文件
	fscanf(pf, "%d %lf %s", &(s.a), &(s.b), s.ch);
	printf("%d %.2lf %s\n", s.a, s.b, s.ch);

	fclose(pf);
	pf = NULL;
	return 0;
}