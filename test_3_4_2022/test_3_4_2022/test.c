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
//�����Ա�ps�еĵ�i��λ��(Ĭ�ϴ�1��ʼ)��Ԫ��ֵ���ظ�e
void GetList(struct S* ps, int i, int* e)
{
	if (0 == ps->num || i<1 || i>ps->num)
	{
		printf("���ҵĲ����ϻ�û��Ԫ��\n");
		printf("%s\n", strerror(errno));
		return;
	}
	*e = ps->pc[i-1];
}
//�������Ա�ps�������eֵ��ȵ�Ԫ�أ�������ҳɹ����ظ�Ԫ�ص�λ��ʧ�ܷ���0
int LocateList(struct S* ps,int e)
{
	int i = 0;
	for (i = 0; i < ps->num; i++)
	{
		if (e == ps->pc[i])
		{
			return i+1;
		}
	}
	return 0;
}
//�����Ա��е�i��λ�ò����µ�Ԫ��e
void ListInsert(struct S* ps, int i, int e)
{
	//����λ�ò�����
	if (i<1 || i>ps->num+1)
	{
		printf("�����λ�ò�����\n");
		printf("%s\n", strerror(errno));
		return;
	}
	//�ж�����
	if (ps->num + 1>ps->len)
	{
		int* tmp = realloc(ps->pc, (ps->len + 1)*sizeof(int));
		if (tmp != NULL)
		{
			ps->pc = tmp;
			ps->len++;
			printf("���ݳɹ�\n");
		}
	}
	//���Ա�����ݴ�i��ʼ����Ų
	int j = 0;
	for (j = 0 ;j<ps->num-i+1; j++)
	{
		ps->pc[ps->num-j] = ps->pc[ps->num-j-1];
	}
	
	ps->pc[i-1] = e;
	ps->num++;
}
//ɾ�����е�i��λ�õ�Ԫ�أ�����e������ֵ
void ListDelete(struct S* ps, int i, int* e)
{
	if (i<1||i>ps->num)
	printf("%s\n", strerror(errno));

	*e = ps->pc[i-1];
	int j = 0;
	for (j = i-1 ; j<ps->num-1; j++)
	{
		ps->pc[j] = ps->pc[j + 1];
	}
	ps->num--;
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
//���ٲ���
void DestroyList(int* ps)
{
	free(ps);
	ps = NULL;
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
	B.pc[1] = 5;
	B.pc[2] = 3;

	B.num = 3;
	//��ʾ���Ա�����
	ShowList(&A);
	ShowList(&B);
	//���Ա�A�����Ա�B�ϲ�,A =A U B
	int len = Listlength(&B);
	int i = 0;
	int e = 0;
	for (i = 1; i < len+1; i++)
	{
		GetList(&B, i, &e);
		int ret = LocateList(&A, e);
		if (0 == ret)
		{
			ListInsert(&A, A.num, e);
		}
	}
	ShowList(&A);
	//�ͷ��ڴ�
	DestroyList(A.pc);
	DestroyList(B.pc);
	return 0;
}