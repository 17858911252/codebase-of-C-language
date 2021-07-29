#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf_s("%d%d", &num1, &num2);
	int sum = 0;
	sum = num1 + num2;
	printf("和=%d\n", sum);
	return 0;
}
