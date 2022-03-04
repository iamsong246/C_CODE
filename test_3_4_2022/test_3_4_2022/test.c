#define _CRT_SECURE_NO_WARNINGS 1

//���Ա�
//���Ա�A�����Ա�B��A = A U B
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<errno.h>

struct S
{
	//ָ�����Ա��ָ��
	int* pc;
	//���Ա���
	int len;
	//���Ա����Ԫ�ظ���
	int num;
};
//���Ա��ʼ3��Ԫ�ؿռ�,�����Ա�Ԫ��ȫ����ʼ��Ϊ0
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
//�ж����Ա��Ƿ�Ϊ�գ��շ���1�����򷵻�0
int ListEmpty(struct S* ps)
{
	if (ps->num==0)
	{
		return 0;
	}
	return 1;
}
//�����Ա����
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
//�����Ա�ps�еĵ�i��λ��(Ĭ�ϴ�0��ʼ)��Ԫ��ֵ���ظ�e
void GetList(struct S* ps, int i, int* e)
{
	*e = ps->pc[i];
}
//�������Ա�ps�������eֵ��ȵ�Ԫ�أ�������ҳɹ����ظ�Ԫ�ص���ţ�Ĭ�ϴ�0��ʼ����ʧ�ܷ���-1
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
//�����Ա��е�i��λ�ò����µ�Ԫ��e
void ListInsert(struct S* ps, int i, int e)
{
	//�ж�����
	if (ps->num + 1>ps->len)
	{
		int* tmp = realloc(ps->pc, (ps->len + 1)*sizeof(int));
		if (tmp != NULL)
		{
			ps->pc = tmp;
			ps->len+=1;
			printf("���ݳɹ�\n");
		}
	}
	//���Ա�����ݴ�i��ʼ����Ų
	int j = 0;
	for (j = 0 ;j<ps->num-i; j++)
	{
		ps->pc[ps->num-j] = ps->pc[ps->num-j-1];
	}
	
	ps->pc[i] = e;
	ps->num++;
}
//ɾ�����е�i��λ�õ�Ԫ�أ�����e������ֵ
void ListDelete(struct S* ps, int i, int* e)
{
	*e = ps->pc[i];
	int j = 0;
	for (j = i ; j<ps->num; j++)
	{
		ps->pc[j] = ps->pc[j + 1];
	}
}
//�������Ա��Ԫ�ظ���
int Listlength(struct S* ps)
{
	return ps->num;
}
//��ʾ���Ա�Ԫ��
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
	//��ʼ�����Ա�
	InitList(&A);
	InitList(&B);
	//��ֵ
	A.pc[0] = 1;
	A.pc[1] = 2;
	A.pc[2] = 3;
	A.num = 3;
	B.pc[0] = 10;
	B.pc[1] = 3;
	B.pc[2] = 3;

	B.num = 3;
	//��ʾ���Ա�����
	ShowList(&A);
	ShowList(&B);
	//���Ա�A�����Ա�B�ϲ�,A =A U B
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
	//�ͷ��ڴ�
	free(A.pc);
	free(B.pc);
	A.pc = NULL;
	B.pc = NULL;
	return 0;
}