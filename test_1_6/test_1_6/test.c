#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int i = 1;
//	for (i; i <= 10; i++)
//	{
//		if (i == 6)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i=0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i; i < 10; i++)
//		printf("%d ", arr[i]);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//		printf("hehe ");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (6 == i)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	switch (a)
//	{
//	case 1:
//		printf("����һ\n", a);
//		break;
//	default:
//		printf("�����\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("hehe\n");
//		i++;
//	} 
//	while (i < 10);
//	return 0;
//}

//����n�Ľ׳�
//int main()
//{
//	int n = 0;
//	int b = 1;
//	int max = 1;
//	scanf("%d", &n);	
//	for (b=1; b <= n; b++)
//		max = max * b;
//	
//	printf("��ֵ�Ľ׳�Ϊ%d\n", max);
//
//	return 0;
//}


//����1��+2��+������+10��
//int main()
//{
//	int n = 0;
//	int b = 1;
//	int a = 1;
//	int max = 1;
//	int max1 = 0;
//	scanf("%d", &n);
//	printf("n��ֵΪ%d\n", n);
//	for (a=1; a <= n; a++)
//	{
//		max = 1;//max��ʼ��
//		for (b=1; b <= a; b++)
//		{
//			max = max * b;
//		}
//		max1 = max + max1;
//	}
//	/*for (a=1; a <= n; a++)
//	{
//		max = max * a;           (�Ż���
//		max1 = max + max1;
//	}*/
//	printf("n�׳˵ĺ�Ϊ%d\n", max1);
//
//	return 0;
//}


//��һ�����������в��Ҿ����ĳ������n
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 10;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);//Ч��̫��
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//�۰�����㷨�����ֲ����㷨
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while(left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("�Ҳ�����\n");
//		}
//			
//	}
//	return 0;
//}

//��д���룬��ʾ����ַ��������ƶ������м��ۡ�
#include <Windows.h>
#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit !!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1; //int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);//ÿ��ӡһ��ͣ��һ�룬ʹ��Windows.h
//		system("cls");//ִ��ϵͳ�����һ��������ʹ��stdlib.h
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
// ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ��
//��ʾ��¼�ɣ�������ξ�����������˳�����
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:> ");
		scanf("%s", &password);
		if (strcmp(password, "123456") == 0)//�ж��ַ����Ƿ����ʹ�ÿ⺯��strcmp
		{
			printf("������ȷ\n");
			break;
		}
		else
		{
			printf("�����������һ��\n");
		}
		Sleep(1000);
		system("cls");

	}
	if (3 == i)
	{
		printf("������󣬼����˳�����\n");
	}
	return 0;
}