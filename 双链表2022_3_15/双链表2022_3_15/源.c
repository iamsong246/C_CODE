#define _CRT_SECURE_NO_WARNINGS 1
#include"test.h"

//初始化双链表
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

//释放空间
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

//双链表的结点后插操作
void InsertNestList(DNode* p, DNode* s)
{
	assert(p);
	assert(s);
	s->nest = p->nest;
	//判断p是否为尾指针
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

//删除p结点的后继结点
void DeleteNestDNode(DNode* p)
{
	assert(p);
	//判断p结点是否为尾指针
	if (p->nest == NULL)
	{
		return;
	}
	DNode* q = p->nest;//后继指针
	p->nest = q->nest;
	//判断q是否为最后一个结点
	if (q->nest != NULL)
	{
		q->nest->prior = p;
	}
	free(p);
	p = NULL;
}