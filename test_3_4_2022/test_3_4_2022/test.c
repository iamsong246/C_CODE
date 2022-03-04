#define _CRT_SECURE_NO_WARNINGS 1

//线性表
//线性表A和线性表B，A = A U B
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<errno.h>

struct S
{
	//指向线性表的指针
	int* pc;
	//线性表长度
	int len;
	//线性表储存的元素个数
	int num;
};
//线性表初始3个元素空间,将线性表元素全部初始化为0
void InitList(struct S* ps)
{
	ps->pc = (int*)calloc(3,sizeof(int));
	if (ps->pc == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	ps->len = 3;
	ps->num = 0;
}
//判断线性表是否为空，空返回1，否则返回0
int ListEmpty(struct S* ps)
{
	if (ps->num==0)
	{
		return 0;
	}
	return 1;
}
//将线性表清空
void ClearList(struct S* ps)
{
	if (ps->num == 0);
	else
	{
		int i = 0;
		for (i = 0; i < ps->num; i++)
		{
			ps->pc[i] = 0;
		}
		ps->num = 0;
	}
}
//将线性表ps中的第i个位置(默认从0开始)的元素值返回给e
void GetList(struct S* ps, int i, int* e)
{
	*e = ps->pc[i];
}
//查找线性表ps中与给定e值相等的元素，如果查找成功返回该元素的序号（默认从0开始），失败返回-1
int LocateList(struct S* ps,int e)
{
	int i = 0;
	for (i = 0; i < ps->num; i++)
	{
		if (e == ps->pc[i])
		{
			return i;
		}
	}
	return -1;
}
//在线性表中第i个位置插入新的元素e
void ListInsert(struct S* ps, int i, int e)
{
	//判断扩容
	if (ps->num + 1>ps->len)
	{
		int* tmp = realloc(ps->pc, (ps->len + 1)*sizeof(int));
		if (tmp != NULL)
		{
			ps->pc = tmp;
			ps->len+=1;
			printf("扩容成功\n");
		}
	}
	//线性表的数据从i开始往后挪
	int j = 0;
	for (j = 0 ;j<ps->num-i; j++)
	{
		ps->pc[ps->num-j] = ps->pc[ps->num-j-1];
	}
	
	ps->pc[i] = e;
	ps->num++;
}
//删除表中第i个位置的元素，并用e返回其值
void ListDelete(struct S* ps, int i, int* e)
{
	*e = ps->pc[i];
	int j = 0;
	for (j = i ; j<ps->num; j++)
	{
		ps->pc[j] = ps->pc[j + 1];
	}
}
//返回线性表的元素个数
int Listlength(struct S* ps)
{
	return ps->num;
}
//显示线性表元素
void ShowList(const struct S* ps)
{
	int i = 0;
	for (i = 0; i < ps->num; i++)
	{
		printf("%d ", ps->pc[i]);
	}
	printf("\n");
}



int main()
{
	struct S A, B;
	//初始化线性表
	InitList(&A);
	InitList(&B);
	//赋值
	A.pc[0] = 1;
	A.pc[1] = 2;
	A.pc[2] = 3;
	A.num = 3;
	B.pc[0] = 10;
	B.pc[1] = 3;
	B.pc[2] = 3;

	B.num = 3;
	//显示线性表内容
	ShowList(&A);
	ShowList(&B);
	//线性表A和线性表B合并,A =A U B
	int len = Listlength(&B);
	int i = 0;
	int e = 0;
	for (i = 0; i < len; i++)
	{
		GetList(&B, i, &e);
		int ret = LocateList(&A, e);
		if (-1 == ret)
		{
			ListInsert(&A, A.num, e);
		}
	}
	ShowList(&A);
	//释放内存
	free(A.pc);
	free(B.pc);
	A.pc = NULL;
	B.pc = NULL;
	return 0;
}