#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#define MAX 10

//��̬����
//������һ��Ƭ�������ڴ�ռ䣬������㼯�а��ã�
//ͷ��㲻��Ԫ�أ������±�Ϊ0������ָ����һ��Ԫ�ص������±�
//β����ָ����һ��Ԫ�ص������±�Ϊ-1����ʾ������
struct Node
{
	int data;//�������
	int next;//��һ��Ԫ�ص������±�
};

//��ʼ����̬����
//��ͷ����ָ����һ��Ԫ�ص������±�����Ϊ-1,����������Ԫ���±�����Ϊ-2����ֹ��Ⱦ��
void InitList(struct Node* arr)
{
	assert(arr);
	arr->next = -1;
	int i = 0;
	for (i = 1; i < MAX; i++)
	{
		(arr + i)->next = -2;
	}
}


int main()
{
	struct Node arr[MAX];//����MAX��Ԫ�صľ�̬����
	InitList(arr);
	return 0;
}