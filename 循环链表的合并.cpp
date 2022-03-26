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
LNode* creatList_R(LinkList& L, int n)
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
	r->next = L;
	return r;
}//后插法创建循环链表
void mergeList(LinkList& A, LinkList& B)
{
	LinkList p = A->next;
	A->next = B->next->next;
	B->next = p;
}
int main()
{
	LinkList LA, LB, A, B;
	A = creatList_R(LA, 10); B = creatList_R(LB, 10);
	mergeList(A, B);
	LinkList p = LA->next;
	while (p != LA)
	{
		printf("%-3d", p->data);
		p = p->next;
	}
	return 0;
}
	
