#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<errno.h>


//int main()
//{
//	//��һ��test.txt�ļ�
//	//���·��
//	// .. ��ʾ��һ��·��
//	fopen("..\test.txt", "r");//����һ����test.txt�ļ�
//	// . ��ʾ��ǰ·��
//	fopen("text.txt", "r"); 
//	//����·��
//	fopen("D:\\C code\\C_CODE\\test_2_26_2022\\test_2_26_2022\\test.txt", "r");//ע�⡮\��ת���ַ�
//	return 0;
//}


int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	//�򿪳ɹ�
	else
	{
		//�ر��ļ�
		fclose(pf);
		pf == NULL;
	}
	return 0;
}




