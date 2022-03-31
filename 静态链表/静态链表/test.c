#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#define MAX 10

//静态链表
//（分配一整片连续的内存空间，各个结点集中安置）
//头结点不放元素，数组下标为0，包含指向下一个元素的数组下标
//尾结点的指向下一个元素的数组下标为-1（表示结束）
struct Node
{
	int data;//存放数据
	int next;//下一个元素的数组下标
};

//初始化静态链表
//将头结点的指向下一个元素的数组下标设置为-1,将其他数组元素下标设置为-2（防止污染）
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
	struct Node arr[MAX];//创建MAX个元素的静态链表
	InitList(arr);
	return 0;
}