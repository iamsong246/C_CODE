#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_name 10
#define MAX_sex 3
#define MAX_tele 13
#define MAX_addr 30

//ö�ٲ˵�ѡ������׽��
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

//ͨѶ¼�ṹ��
struct people
{
	//���������䡢�Ա𡢵绰����ַ
	char name[MAX_name];
	char sex[MAX_sex];
	char tele[MAX_tele];
	char addr[MAX_addr];
	int age;
};

struct Contact
{
	//��Ϣ
	struct people* p;
	//�������Ϣ�ĸ���
	int size;
	//��ǰͨѶ¼����
	int cap;
};

//��������
//��ʼ��ͨѶ¼
void init_Contact(struct Contact* ps);
//���ͨ��¼
void AddContact(struct Contact* ps);
//��ʾͨѶ¼
void ShowContact(const struct Contact* ps);
//ɾ��ͨѶ¼
void DelContact(struct Contact* ps);
//����ͨѶ¼��Ϣ
void FindContact(const struct Contact* ps);
//�޸�ͨѶ¼��Ϣ
void ModifyContact(struct Contact* ps);
//��ͨѶ¼ָ������Ϣ����
SortContact(struct Contact* ps);