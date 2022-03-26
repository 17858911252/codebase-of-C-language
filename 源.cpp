#define MAXSIZE 100
#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
typedef int ElemType;
typedef int Status;
typedef struct
{
	ElemType* elem;
	int length;
}Sqlist;
Status Initlist(Sqlist& L)
{
	L.elem = new ElemType[MAXSIZE];
	if (!L.elem)
		exit(OVERFLOW);
	L.length = 0;
	return OK;
}
Status GetElem(Sqlist L, int i, ElemType &e)
{
	if (i<1 || i>L.length) return ERROR;
	e = L.elem[i - 1];
	return OK;
}
int LocateElem(Sqlist L, ElemType e)
{
	int i;
	for (i = 0; i < L.length; i++)
		if (L.elem[i] == e)
			return  i + 1;
	return 0;
}
int main()
{
	int i;
	Sqlist L;
	printf("%d\n", Initlist(L));
	L.length = 10;
	for (i = 0; i < L.length; i++)
		L.elem[i] = i; 
	int e;
	scanf("%d", &i);
	printf("%d\n", GetElem(L, i, e));
	printf("%d\n", e);
	scanf("%d", &e);
	printf("%d\n",LocateElem(L, e));
	return 0;
}