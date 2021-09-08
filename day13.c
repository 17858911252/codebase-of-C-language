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

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void test(int i)
{
	if (i < 9)
	{
		test(i + 1);
	}
	printf("%d ", i);
 }

int main()
{
	test(1);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n/10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int  num = 0;
	scanf("%u", &num);
	print(num);
	return 0;
}
