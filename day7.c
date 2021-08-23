#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	for (i = 1; i <= 10; i++)
		printf("%d\n", i);
	int k;
	for (k = 0; k = 0; k++)
		k++;//循环0次
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 1;
	do
	{
		printf("%d\n", i);
		i++;
	}while (i < 11);
	return 0;
}
        int n;
	int i ;
	int k = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		k = k*i;
	}
	printf("%d\n", k);
	int n;
	int i ;
	int k = 1;
	int sum=0;
	for (n = 1; n <= 3; n++)
	{
		int k = 1;
		for (i = 1; i <= n; i++)
		{
			k = k*i;
		}
		sum = sum + k;
	}
	printf("%d\n", sum);
	return 0;
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 1;
	int i = 1;
	int n = 0;
	int sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		a *= i;
		sum += a;
	}
	printf("sum=%d\n", sum);
	return 0;
}
