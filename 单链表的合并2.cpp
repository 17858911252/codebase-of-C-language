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
		cin >> p->data;
		p->next = NULL;
		r->next = p;
		r = p;
	}
}//后插法创建单链表LA,LB
void MergeList_L(LinkList& LA, LinkList& LB, LinkList& LC)//将两个非递减的单链表合并为一个非递增的单链表
{
	LinkList pa, pb, pc, q;
	pa = LA->next; pb = LB->next;
	LC = LA; pc = LC; LC->next = NULL;
	while (pa || pb)
	{
		if (!pa)
		{
			q = pb;
			pb = pb->next;
		}
		else if (!pb)
		{
			q = pa;
			pa = pa->next;
		}
		else if (pa->data <= pb->data)
		{
			q = pa;
			pa = pa->next;
		}
		else
		{
			q = pb;
			pb = pb->next;
		}
		q->next = LC->next; LC->next = q;//前插法创建单链表LC
	}
	delete LB;
}
int main()
{
	LinkList LA, LB, LC;
	creatList_R(LA, 5); creatList_R(LB, 5);
	MergeList_L(LA, LB, LC);
	LinkList p = LC->next;
	while (p)
	{
		printf("%-3d", p->data);
		p = p->next;
	}
	return 0;
}