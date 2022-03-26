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
}LNode,*LinkList;
void createList_H(LinkList& L, int n)
{
	L = new LNode;
	L->next = NULL;
	int i;
	for (i = 0; i < n; i++)
	{
		LinkList p = new LNode;
		cin >> p->data;
		p->next = L->next;
		L->next = p;
	}
}//前插法创建单链表
void creatList_R(LinkList& L, int n)
{
	L = new LNode;
	L->next = NULL;
    LinkList r=L;
	int i;
	for (i = 0; i < n; i++)
	{
		LinkList p = new LNode;
		cin >> p->data;
		p->next = NULL;
		r->next = p;
		r = p;
	}
}//后插法创建单链表
int main()
{
	LinkList L;
	creatList_R(L, 10);//createList_H(L, 10);
	return 0;
}