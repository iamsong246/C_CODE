#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<errno.h>


//int main()
//{
//	//打开一个test.txt文件
//	//相对路径
//	// .. 表示上一级路径
//	fopen("..\test.txt", "r");//打开上一级的test.txt文件
//	// . 表示当前路径
//	fopen("text.txt", "r"); 
//	//绝对路径
//	fopen("D:\\C code\\C_CODE\\test_2_26_2022\\test_2_26_2022\\test.txt", "r");//注意‘\’转义字符
//	return 0;
//}


int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	//打开成功
	else
	{
		//关闭文件
		fclose(pf);
		pf == NULL;
	}
	return 0;
}




