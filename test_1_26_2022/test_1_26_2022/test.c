#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	system("pause");
//	return 0;
//}
//��ѭ��ԭ��1��ջ�����ߵ�ַ���͵�ַ��ŵģ�i�ȴ���ڸߵ�ַ��
//2������Ԫ�ص�ַ���ɸߵ��͵ģ���ѭ��Խ��ʱ������i���arr[i]���ַ���i��ַ��ͬ���ı�arr[i]���൱�ڸı�i

//void my_strcpy(char* arr1, char* arr2)
//{
//	int i = 0;
//	while (1)
//	{
//		if (*(arr2+i) != '\0')
//		{
//			*(arr1 + i) = *(arr2 + i);
//			i++;
//		}
//		else
//		{
//			*(arr1 + i) = *(arr2 + i);
//			break;
//		}
//	}
//}
//void my_strcpy(char* arr1, char* arr2)
//{
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;
//}
//����������Ż�
//void my_strcpy(char* arr1, char* arr2)
//{
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}//�������ã�������ΪNULL��������
/*void my_strcpy(char* arr1, char* arr2)
{
	if (arr1 != NULL && arr2 != NULL)
	{
		while (*arr1++ = *arr2++)
		{
			;
		}
	}
}*///������NULL���ᱨ��
#include<assert.h>
//void my_strcpy(char* arr1, char* arr2)
//{
//	assert(arr1 != NULL);//���ԣ��治�����ٱ���
//	assert(arr2 != NULL);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}//���Ż�
//void my_strcpy(char* arr1,const char* arr2)
//{
//	assert(arr1 != NULL);//���ԣ��治�����ٱ���
//	assert(arr2 != NULL);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}
//
//char* my_strcpy(char* arr1, const char* arr2)
//{
//	char* ret = arr1;
//	assert(arr1 != NULL);//���ԣ��治�����ٱ���
//	assert(arr2 != NULL);
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "************";
//	char arr2[] = "bit123";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}


//ģ��strlen�����Ż���
int my_strlen(const char* ch)
{
	int count = 0;
	assert(ch != NULL);//��ָ֤�����Ч��
	while (*ch++ != '\0')
	{
		count++;
	}
	return count;
}
int main()
{
	char ch[] = "abc  defg";
	//int ret = my_strlen(ch);
	printf("%d\n", my_strlen(ch));
	return 0;
}