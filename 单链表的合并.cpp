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
}//��巨����������
void MergeList_L(LinkList& LA, LinkList& LB, LinkList& LC)//�������ǵݼ��ĵ�����ϲ�Ϊһ���ǵݼ��ĵ�����
{
	LinkList pa, pb, pc;
	pa = LA->next; pb = LB->next;
	LC = LA; pc = LC;
	while (pa && pb)
	{
		if (pa->data <= pb->data)
		{
			pc->next = pa;
			pc = pa;
			pa = pa->next;
		}
		else
		{
			pc->next = pb;
			pc = pb;
			pb = pb->next;
		}
	}
	pc->next = pa?pa : pb;
	delete LB;
}
int main()
{
	LinkList LA,LB,LC;
     creatList_R(LA,5); creatList_R(LB, 5); 
	 MergeList_L(LA, LB, LC);
	 int i;
	 LinkList p = LC->next;
	 for (i = 0; i < 10; i++)
	 {
		 printf("%-3d", p->data);
		 p = p->next;
	 }
	return 0;
}