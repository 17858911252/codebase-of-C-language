#include<stdio.h>
void swap(int *x,int *y)
{
	int t;
	if (*x < *y)
	{
		t = *x;
		*x = *y;
		*y = t;
	}
}

int main()
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	swap(&a,&b);
	swap(&a,&c);
	swap(&b,&c);
	printf("%d %d %d", a, b, c);
	return 0;
}
