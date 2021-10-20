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
