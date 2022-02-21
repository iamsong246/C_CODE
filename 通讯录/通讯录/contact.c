#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

//��������

void init_Contact(struct Contact* ps)
{
	memset(ps->p, 0, sizeof(ps->p));
	ps->size = 0;
}

void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->p[ps->size].name);
		printf("����������:>");
		scanf("%d", &(ps->p[ps->size].age));
		printf("�������Ա�:>");
		scanf("%s", ps->p[ps->size].sex);
		printf("������绰:>");
		scanf("%s", ps->p[ps->size].tele);
		printf("�������ַ:>");
		scanf("%s", ps->p[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	}
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼û����Ϣ\n");
	}
	else
	{
		int i = 0;
		printf("%-5s\t%-5s\t%-5s\t%-10s\t%-10s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-5s\t%-5d\t%-5s\t%-10s\t%-10s\n", 
				ps->p[i].name,
				ps->p[i].age,
				ps->p[i].sex,
				ps->p[i].tele,
				ps->p[i].addr);
		}
	}
}

//����ͨѶ¼��Ӧ���ֵ�λ��
static int FindName(const struct Contact* ps, char* name)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->p[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

void DelContact(struct Contact* ps)
{
	char name[MAX_name];
	printf("������Ҫɾ��ͨѶ¼������:>");
	scanf("%s", name);
	int pos = FindName(ps,name);
	if (-1 == pos)
	{
		printf("Ҫɾ����ͨѶ¼�˲�����\n");
	}
	else
	{
		int j = pos;
		for (j = pos; j <ps->size-1 ; j++)
		{
			ps->p[j] = ps->p[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void FindContact(const struct Contact* ps)
{
	char name[MAX_name];
	printf("������Ҫ����ͨѶ¼������:>");
	scanf("%s", name);
	int pos = FindName(ps, name);
	if (-1 == pos)
	{
		printf("Ҫ���ҵ�ͨѶ¼������\n");
	}
	else
	{
		printf("%-5s\t%-5s\t%-5s\t%-10s\t%-10s\n", "����", "����", "�Ա�", "�绰", "��ַ");
			printf("%-5s\t%-5d\t%-5s\t%-10s\t%-10s\n",
				ps->p[pos].name,
				ps->p[pos].age,
				ps->p[pos].sex,
				ps->p[pos].tele,
				ps->p[pos].addr);
	}
}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_name];
	printf("������Ҫ�޸ĵ�ͨѶ¼������:>");
	scanf("%s", name);
	int pos = FindName(ps, name);
	if (-1 == pos)
	{
		printf("Ҫ�޸ĵ�ͨѶ¼������\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->p[pos].name);
		printf("����������:>");
		scanf("%d", &(ps->p[pos].age));
		printf("�������Ա�:>");
		scanf("%s", ps->p[pos].sex);
		printf("������绰:>");
		scanf("%s", ps->p[pos].tele);
		printf("�������ַ:>");
		scanf("%s", ps->p[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}

//����������
static int cmp1(const void* e1,const void* e2)
{
	return strcmp(((struct people*)e1)->name, ((struct people*)e2)->name);
}

//����������
static int cmp2(const void* e1, const void* e2)
{
	return ((struct people*)e1)->age - ((struct people*)e2)->age;
}

//����������
static int cmp3(const void* e1, const void* e2)
{
	return strcmp(((struct people*)e1)->sex, ((struct people*)e2)->sex);
}

SortContact(struct Contact* ps)
{
	printf("���򷽷���1������  2������  3���Ա�\n");
	printf("��ѡ�����򷽷��������֣���>");
	int ret = 0;
	scanf("%d", &ret);
	if (1 == ret)
	{
		//����������
		qsort(ps->p, ps->size, sizeof(ps->p[0]), cmp1);
		printf("����������ɹ�\n");
	}
	else if (2 == ret)
	{
		//����������
		qsort(ps->p, ps->size, sizeof(ps->p[0]), cmp2);
		printf("����������ɹ�\n");
	}
	else if (3 == ret)
	{
		//���Ա�����
		qsort(ps->p, ps->size, sizeof(ps->p[0]), cmp3);
		printf("���Ա�����ɹ�\n");
	}
	else
	{
		printf("�������\n");
	}
}