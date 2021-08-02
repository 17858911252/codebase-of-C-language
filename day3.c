#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
int Add(int x, int y,int t)
{
	int z = x + y - t;
	return z;
}
int main()
{
	int sum = 0;
	int a = 100;
	int b = 200;
	int c = 150;
	sum = Add(a,b,c);
	printf("sum=%d\n", sum);  
        int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	while (i < 10)
	{
		printf("d\n", arr[i]);
			i++;
	}
	if (i >= 10)
		printf("good luck");
	return 0;
}
 
