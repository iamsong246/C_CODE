#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//strtok
//int main()
//{
//	char arr[] = "234516781910";
//	//��Ҫ����и����ַ��ļ���
//	char* p = "17";
//	//�����ַ�������ʱ����
//	char tmp[1024] = { 0 };
//	strcpy(tmp, arr);
//	//�и��ַ���
//	char* ret = NULL;
//	//�����и�ֻ����NULL
//	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s ", ret);
//	}
//	return 0;
//}

//
////strerror����ʹ��
//#include<errno.h>
//int main()
//{
//	//��ǰĿ¼��û��test.txt�ļ�
//	FILE* ret = fopen("test.txt", "r");
//	if (ret == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("file open success\n");
//	}
//	return 0;
//}

////���ຯ��
//#include<ctype.h>
//int main()
//{
//	/*char p = 'w';
//	printf("%d\n", islower(p));*/
//	//printf("%c\n", tolower('Q'));
//	/*char ch = toupper('a');
//	putchar(ch);*/
//
//	char arr[] = "I am a Student";
//	/*int len = strlen(arr);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		arr[i] = tolower(arr[i]);
//	}
//	printf("%s\n", arr);*/
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

////memcpy����
////ʵ��˼·
//void* my_memcpy(void* dest,const void* src, size_t x)
//{
//	assert(dest&&src);
//	void* ret = dest;
//	while (x--)
//	{
//		*((char*)dest)++ = *((char*)src)++;
//			
//		/**(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;*/
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[20] = { 0 };
//	int arr2[10] = { 1, 2, 3, 4, 5 };
//	//memcpy(arr1, arr2, sizeof(arr2));
//	my_memcpy(arr1, arr2, sizeof(arr2));
//	int i = 0;
//	int num = sizeof(arr1) / sizeof(arr1[0]);
//	for(i = 0; i < num; i++)
//	{
//		printf("%d\n", arr1[i]);
//	}
//	return 0;
//

////memmove����
//void* my_memmove(void* dest,const void* src, size_t num)
//{
//	assert(dest&&src);
//	//dest��ַС��src��ַ����ǰ���󿽱�
//	//dest��ַ��src��ַ��src+num��ַ֮�䣬�Ӻ���ǰ����
//	//dest��ַ��src+num��ַ֮�󣬶�����
//	int i = 0;
//	//dest��ַ����src��ַ�Ӻ���ǰ����
//	if ( dest > src )
//	{
//		for (i = 0; i < (int)num; i++)
//		{
//			*((char*)dest + num - 1 - i) = *((char*)src + num - 1 - i);
//		}
//		return dest;
//	}
//	else//�����������ǰ���󿽱�
//	{
//		for (i = 0; i < (int)num; i++)
//		{
//			*((char*)dest + i) = *((char*)src + i);
//		}
//		return dest;
//	}
//	return dest;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	//int arr1[] = { 0, 0, 0, 0, 0, 0, 0 };
//	my_memmove(arr+3, arr, 16);
//	//memmove(arr, arr + 3, 20);
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 1, 2, 4, 5, 6 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}

int main()
{
	char arr[10] = "";
	memset(arr, '#', 10);
	printf("%s\n", arr);

	return 0;
}
