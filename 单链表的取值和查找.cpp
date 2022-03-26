#define MAXSIZE 100
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
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
Status GetElem(LinkList L, int i, ElemType& e)
{
	LinkList p = L->next; int j = 1;
	while (p && j < i)
	{
		p = p->next;
		j++;
	}
	if (!p || j > i) return ERROR;
	e = p->data;
	return OK;
}
LNode* LocateElem(LinkList L, ElemType e)
{
	LinkList p = L->next;
	while (p && p->data != e)
		p = p->next;
	return p;
}
int main()
{
	LinkList L;
	creatList_R(L, 10);
	int i; scanf("%d", &i); int e;
	GetElem(L, i, e);
	printf("%d\n", e);
	scanf("%d", &e);
	printf("%p\n",LocateElem(L, e));
	return 0;
}