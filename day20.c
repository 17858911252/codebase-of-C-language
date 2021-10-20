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
#include<stdio.h>
#include<math.h>
int main()
{
	
	int n = 0;
	scanf_s("%d", &n);
	int f1 = 0;
	int f2 = 1;
	int f3 = 0;
	while (1)
	{
		if (n == f2)
		{
			printf("%d\n", 0);
			break;
		}
		else if (n < f2)
		{
			if (abs(f1 - n) < abs(f2 - n))
			{
				printf("%d", abs(f1 - n));
				break;
			}
			else
			{
				printf("%d", abs(f2 - n));
				break;
			}
		}
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int grade;
	scanf_s("%d", &grade);
	if (grade >= 90)
		printf("A");
	else if (grade >= 80)
		printf("B");
	else if (grade >= 70)
		printf("C");
	else if (grade >= 60)
		printf("D");
	else
		printf("E");
	return 0;
}
	#include<stdio.h>
        int main()
	{
	int x, y;
	scanf_s("%d", &x);
	if (x < 1)
		y = x;
	else if (x < 10)
		y = 2 * x - 1;
	else
		y = 3 * x - 11;
	printf("y=%d\n", y);
	return 0;
}
#include<stdio.h>
int MAX(int x, int y)
{
	if (x < y)
		return y;
}
int main()
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	int max =a;
	max = MAX(max, b);
	max = MAX(max, c);
	printf("最大的数是%d", max);
	return 0;
}
