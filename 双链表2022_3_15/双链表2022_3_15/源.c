#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"

//��ʼ��˫����
void InitList(DLinkList** L)
{
	assert(*L);
	*L = (DLinkList*)malloc(sizeof(DLinkList));
	if (*L == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	(*L)->nest = NULL;
	(*L)->prior = NULL;
}

//�ͷſռ�
void Free(DLinkList* L)
{
	assert(L);
	while (L->nest != NULL)
	{
		DeleteNestDNode(L);
	}
	free(L);
	L = NULL;
}

//˫����Ľ�������
void InsertNestList(DNode* p, DNode* s)
{
	assert(p);
	assert(s);
	s->nest = p->nest;
	//�ж�p�Ƿ�Ϊβָ��
	if (p->nest == NULL)
	{
		s->prior = p;
		p->nest = s;
		return;
	}
	(s->nest)->prior = s;
	s->prior = p;
	p->nest = s;
}

//ɾ��p���ĺ�̽��
void DeleteNestDNode(DNode* p)
{
	assert(p);
	//�ж�p����Ƿ�Ϊβָ��
	if (p->nest == NULL)
	{
		return;
	}
	DNode* q = p->nest;//���ָ��
	p->nest = q->nest;
	//�ж�q�Ƿ�Ϊ���һ�����
	if (q->nest != NULL)
	{
		q->nest->prior = p;
	}
	free(p);
	p = NULL;
}