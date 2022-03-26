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
Status ListInsert(Sqlist &L, int i, ElemType e)
{
	if (i<1 || i>L.length + 1) return ERROR;
	if (L.length == MAXSIZE)       return ERROR;
	int j;
	for (j = L.length - 1; j >= i-1; j--)
		L.elem[j + 1] = L.elem[j];
	L.elem[i - 1] = e;
	L.length++;
	return OK;
}
Status ListDelete(Sqlist& L, int i)
{
	if (i<1 || i>L.length) return ERROR;
	int j;
	for (j = i; j <= L.length - 1; j++)
		L.elem[j - 1] = L.elem[j];
	L.length--;
	return OK;
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
	scanf("%d%d", &i,&e);
	printf("%d\n",ListInsert(L, i, e));
	for (i = 0; i < L.length; i++)
		printf("%-3d", L.elem[i]);
	printf("\n");
	scanf("%d", &i);
	printf("%d\n",ListDelete(L, i));
	for (i = 0; i < L.length; i++)
		printf("%-3d", L.elem[i]);
	printf("\n");
	return 0;
}