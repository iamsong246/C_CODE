#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<stdbool.h>

//双链表
typedef struct DLinkList
{
	int data;
	struct DLinkList* nest;//后继指针
	struct DLinkList* prior;//前驱指针
}DLinkList, DNode;

//初始化双链表
void InitList(DLinkList** L);
//释放空间
void Free(DLinkList* L);
//双链表的后插操作
void InsertNestList(DNode* p, DNode* s);
//删除p结点的后继结点
void DeleteNestDNode(DNode* p);