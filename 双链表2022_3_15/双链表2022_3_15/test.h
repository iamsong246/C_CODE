#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<stdbool.h>

//˫����
typedef struct DLinkList
{
	int data;
	struct DLinkList* nest;//���ָ��
	struct DLinkList* prior;//ǰ��ָ��
}DLinkList, DNode;

//��ʼ��˫����
void InitList(DLinkList** L);
//�ͷſռ�
void Free(DLinkList* L);
//˫����ĺ�����
void InsertNestList(DNode* p, DNode* s);
//ɾ��p���ĺ�̽��
void DeleteNestDNode(DNode* p);