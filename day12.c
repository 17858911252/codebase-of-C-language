
#include<stdio.h>
void swap(int* x, int* y)
{
	int z;
	z = *x;
	*x = *y;
	*y = z;
}


int main()
{
	int a;
	int b;
	scanf("%d%d", &a, &b);
	printf("交换前a=%d  b=%d\n", a, b);
	swap(&a, &b);
	printf("交换后a=%d  b=%d\n", a, b);
	return 0;
}


#include<stdio.h>
int MAX(int x, int y)
{
	int z;
	if (x > y)
		z = x;
	else
		z = y;
	return z;
}

int main()
{
	int a;
	int b;
	scanf("%d%d", &a, &b);
	int max = MAX(a, b);
	printf("%d\n", max);
		return 0;
}

