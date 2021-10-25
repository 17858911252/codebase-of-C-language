#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	int count=0;
	again:
	if (n <= 0 && n >= 100000)
		goto again;
	if (n / 10000!=0)
	{
		printf("%d ", n / 10000);
		count++;
	}
	if (n / 1000 != 0)
	{
		printf("%d ", n % 10000 / 1000);
		count++;
	}
	if (n/ 100 != 0)
	{
		printf("%d ", n % 1000 / 100);
		count++;
	}
	if (n / 10 != 0)
	{
		printf("%d ", n % 100 / 10);
		count++;
	}
	printf("%d\n", n % 10);
	count++;
	printf("%d ", n % 10);
	if (n / 10 != 0)
		printf("%d ", n % 100 / 10);
	if (n / 100 != 0)
		printf("%d ", n % 1000 / 100);
	if (n / 1000 != 0)
		printf("%d ", n % 10000 / 1000);
	if (n / 10000 != 0)
		printf("%d ", n / 10000);
	printf("\nn是%d位数\n", count);
	return 0;
}
#include<stdio.h>
int main()
{
	int f1 = 0, f2 = 1,f3,i;
	printf("%d %d ", f1, f2);
	for (i = 1; i <= 38; i++)
	{
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
	}
	return 0;

}
#include<stdio.h>
int main()
{
	int i,j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d  ", i,j , i * j);
		}
		printf("\n");
	}
	return 0;
}
