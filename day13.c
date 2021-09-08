#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void add(int* pnum)
{
	(*pnum)++;
}
int main()
{
	int num = 1;
	while (num <= 10)
	{
		add(&num);
	}
	printf("%d\n", num);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
 
int main()
{
	printf("%d\n", strlen("abc"));
	char arr1[20] = { 0 };
	char arr2[20] = { "hello world" };
	printf("%s\n", strcpy(arr1, arr2));
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}
