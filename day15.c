#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void rank(int arr[],int sz)
{
	int i;
	int j;
	for (i = 1; i < sz; i++)
	{
		for (j = 0; j <sz-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,5,6,2,3,4,0,1};
	int sz = sizeof(arr) / sizeof(arr[0]);
	rank(arr,sz);
	printf("%p\n", &arr);
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	system("cls");
	printf("a=%d,b=%d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d,b=%d\n", a, b);
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d", &a, &b);
	printf("a=%d,b=%d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d,b=%d\n", a, b);
	return 0;
}
