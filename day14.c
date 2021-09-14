#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	int j=0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			j++;
		if (i / 10 == 9)
			j++;
	}
	printf("%d\n", j);
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
	int i;
	for (i = 1; i <= 9; i++)
	{
		int j;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d  ", i, j, i * j);
		}
		printf("\n");
	}
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
	int arr[10] = {0};
	int* p = arr;
	int i=0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
		printf("%d\n", *p);
		p++;
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[3][4] = { {1,2},{3,4},{5,6} };
	int i = 0;
	int j = 0;
	int* p = &arr[0][0];
	for (i = 0; i < 12; i++)
	{
		printf("%d ", *p);
		p++;
	}
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[3][4] = { {1,2},{3,4},{5,6} };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
