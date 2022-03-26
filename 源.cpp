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
int main()
{
	int i;
	Sqlist L;
	printf("%d\n", Initlist(L));
	scanf("%d", &L.length);
	for (i = 0; i < L.length; i++)
		scanf("%d", &L.elem[i]);
	return 0;
}