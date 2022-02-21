#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

//函数定义

void init_Contact(struct Contact* ps)
{
	memset(ps->p, 0, sizeof(ps->p));
	ps->size = 0;
}

void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->p[ps->size].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->p[ps->size].age));
		printf("请输入性别:>");
		scanf("%s", ps->p[ps->size].sex);
		printf("请输入电话:>");
		scanf("%s", ps->p[ps->size].tele);
		printf("请输入地址:>");
		scanf("%s", ps->p[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录没有信息\n");
	}
	else
	{
		int i = 0;
		printf("%-5s\t%-5s\t%-5s\t%-10s\t%-10s\n", "名字", "年龄", "性别", "电话", "地址");
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

//查找通讯录对应名字的位置
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
	printf("请输入要删除通讯录的名字:>");
	scanf("%s", name);
	int pos = FindName(ps,name);
	if (-1 == pos)
	{
		printf("要删除的通讯录人不存在\n");
	}
	else
	{
		int j = pos;
		for (j = pos; j <ps->size-1 ; j++)
		{
			ps->p[j] = ps->p[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void FindContact(const struct Contact* ps)
{
	char name[MAX_name];
	printf("请输入要查找通讯录的名字:>");
	scanf("%s", name);
	int pos = FindName(ps, name);
	if (-1 == pos)
	{
		printf("要查找的通讯录不存在\n");
	}
	else
	{
		printf("%-5s\t%-5s\t%-5s\t%-10s\t%-10s\n", "名字", "年龄", "性别", "电话", "地址");
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
	printf("请输入要修改的通讯录的名字:>");
	scanf("%s", name);
	int pos = FindName(ps, name);
	if (-1 == pos)
	{
		printf("要修改的通讯录不存在\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->p[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->p[pos].age));
		printf("请输入性别:>");
		scanf("%s", ps->p[pos].sex);
		printf("请输入电话:>");
		scanf("%s", ps->p[pos].tele);
		printf("请输入地址:>");
		scanf("%s", ps->p[pos].addr);
		printf("修改成功\n");
	}
}

//按名字排序
static int cmp1(const void* e1,const void* e2)
{
	return strcmp(((struct people*)e1)->name, ((struct people*)e2)->name);
}

//按年龄排序
static int cmp2(const void* e1, const void* e2)
{
	return ((struct people*)e1)->age - ((struct people*)e2)->age;
}

//按年龄排序
static int cmp3(const void* e1, const void* e2)
{
	return strcmp(((struct people*)e1)->sex, ((struct people*)e2)->sex);
}

SortContact(struct Contact* ps)
{
	printf("排序方法有1、名字  2、年龄  3、性别\n");
	printf("请选择排序方法（填数字）：>");
	int ret = 0;
	scanf("%d", &ret);
	if (1 == ret)
	{
		//按名字排序
		qsort(ps->p, ps->size, sizeof(ps->p[0]), cmp1);
		printf("按名字排序成功\n");
	}
	else if (2 == ret)
	{
		//按年龄排序
		qsort(ps->p, ps->size, sizeof(ps->p[0]), cmp2);
		printf("按年龄排序成功\n");
	}
	else if (3 == ret)
	{
		//按性别排序
		qsort(ps->p, ps->size, sizeof(ps->p[0]), cmp3);
		printf("按性别排序成功\n");
	}
	else
	{
		printf("输入错误\n");
	}
}