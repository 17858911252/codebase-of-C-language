#define MAXSIZE 100
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;
typedef int ElemType;
typedef int Status;
typedef struct LNode
{
	ElemType data;
	struct LNode* next;
}LNode, * LinkList;
void creatList_R(LinkList& L, int n)
{
	L = new LNode;
	L->next = NULL;
	LinkList r = L;
	int i;
	for (i = 0; i < n; i++)
	{
		LinkList p = new LNode;
		p->data = i;
		p->next = NULL;
		r->next = p;
		r = p;
	}
}//后插法创建单链表
Status ListInsert(LinkList& L, int i, ElemType e)
{
	LinkList p = L; int j = 0;
	while (p && j < i - 1)
	{
		p = p->next;
		j++;
	}
	if (!p || j > i - 1) return ERROR;
	LinkList s = new LNode;
	s->data = e;
	s->next = p->next;
	p->next = s;
	return OK;
}
Status ListDelete(LinkList& L, int i)
{
	LinkList p = L; int j = 0;
	while ((p->next) && j < i - 1)
	{
		p = p->next; 
		j++;
	}
	if (!(p->next) || j > i - 1) return ERROR;
	LinkList q = p->next;
	p->next = q->next;
	delete q;
	return OK;
}
int main()
{
	LinkList L;
	creatList_R(L, 10); 
	int i; scanf("%d", &i); int e; scanf("%d", &e);
	ListInsert(L, i, e);
	scanf("%d", &i);
	ListDelete(L, i);
	LinkList p = L->next;
	while (p)
	{
		printf("%-3d", p->data);
		p = p->next;
	}
	return 0;
}