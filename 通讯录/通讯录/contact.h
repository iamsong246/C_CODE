#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_name 10
#define MAX_sex 3
#define MAX_tele 13
#define MAX_addr 30

//枚举菜单选项，更容易解读
enum Option
{
	Exit,//0
	add,//1
	del,//2
	find,//3
	modify,//4
	show,//5
	sort//6
};

//通讯录结构体
struct people
{
	//姓名、年龄、性别、电话、地址
	char name[MAX_name];
	char sex[MAX_sex];
	char tele[MAX_tele];
	char addr[MAX_addr];
	int age;
};

struct Contact
{
	//信息
	struct people* p;
	//已添加信息的个数
	int size;
	//当前通讯录容量
	int cap;
};

//函数声明
//初始化通讯录
void init_Contact(struct Contact* ps);
//添加通信录
void AddContact(struct Contact* ps);
//显示通讯录
void ShowContact(const struct Contact* ps);
//删除通讯录
void DelContact(struct Contact* ps);
//查找通讯录信息
void FindContact(const struct Contact* ps);
//修改通讯录信息
void ModifyContact(struct Contact* ps);
//给通讯录指定的信息排序
SortContact(struct Contact* ps);