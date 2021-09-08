
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
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int judge(int x)
{
	int j;
	for (j = 2; j <= sqrt(x); j++)
	{
		if (x % j == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int i;
	for (i = 100; i <= 200; i++)
	{
		if (judge(i) == 1)
			printf("素数%d ", i);
		else
			printf("非素数%d ", i);
	}
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int judge(int n)
{
	if (n % 4 == 0 && n % 100 != 0)
		return 1;
	if (n % 400 == 0)
		return 1;
	return 0;
}
int main()
{
	int i;
	for (i = 1000; i <= 2000; i++)
	{
		if (judge(i) == 1)
			printf("%d ", i);
	}
}

#include<stdio.h>
int search(int arr[],int x,int y)
{
	int left = 0;
	int right = y - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (x < arr[mid])
			right = mid - 1;
		else if (x > arr[mid])
			left = mid + 1;
		else
			return mid;
	}
	return -1;
}
int main()
{
	int key = 0;
	again:
        scanf("%d",&key);
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
		int ret = search(arr,key, sz);
		if (ret == -1)
		{
			printf("该数在数组中不存在\n");
			goto again;
		}
		else
		printf("下标为%d", ret);
	return 0;
}
