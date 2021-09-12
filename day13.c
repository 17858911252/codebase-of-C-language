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
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * fac(n - 1);
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", fac(n));
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int str(char* n)
{
	if (*n != '\0')
		return 1 + str(n + 1);
	else
		return 0;
}
int main()
{
	char arr[] = "hello world";
	printf("%d\n", str(arr));
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int str(char* n)
{
	int i = 0;
	while(*n!='\0')
	{
		i++;
		n++;
	}
	return i;
}

int main()
{
	char arr[] = "hello world" ;
	printf("%d\n", str(arr));
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("%lf", sum);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i = 1;
	double k = 0.0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 != 0)
			k+= 1.0 / i;
		else
			k-= 1.0 / i;
	}
	printf("%lf", k);
	return 0;
}
