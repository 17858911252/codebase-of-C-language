#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
int Add(int x, int y,int t)
{
	int z = x + y - t;
	return z;
}
int main()
{
	int sum = 0;
	int a = 100;
	int b = 200;
	int c = 150;
	sum = Add(a,b,c);
	printf("sum=%d\n", sum);
	return 0;
}
