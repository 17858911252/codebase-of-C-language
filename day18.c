#include<stdio.h>
int main()
{
	int num[] = { 1,2,3 };
	int *pa = &num[0];
	int *pb = &num[1];
	int *pc=&num[0];
	if (pa < pb)
		printf("pa指向的存储地址小于pb指向的存储地址\n");
	if (pa==pc)
		printf("pa和pc指向同一个地址\n");
	return 0;

}
#include<stdio.h>
int main()
{
	int num[] = { 1,2,3,4,5,6};
	int *p = num;
	int i;
	for (i = 0; i <= 5; i++)
	{
		printf("%d,", *(p+i));
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int num[] = { 1,2,3,4,5,6};
	int *p = num;
	int **pp = &p;
	printf("%d\n", *(*pp));
	return 0;
}
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int i;
	int* p = arr;
	int **pp = &p;
	for (i = 1; i <= 5; i++)
	{
		printf("%d,", **pp);//**pp=*p
		p++;
	}
	return 0;
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int *p[5];
	int i;
	for (i = 0; i <= 4; i++)
	{
		p[i] = &arr[i];
	}
	int **pp;
	pp = p;
	for (i = 0; i <= 4; i++)
	{
		printf("%d,", **pp);
		pp++;
	}
	return 0;
}
#include<stdio.h>
void swap(int *x, int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}
int main()
{
	int nums[2][2] = 
	{
		{1, 2},
		{2, 3}
	};
	int* p[2] = { nums[0], nums[1] };
	printf("nums[0][0] = %d\n", **p);
	printf("nums[1][0] = %d\n", **(p + 1));
	printf("nums[0][1] = %d\n", *(*p + 1));
	printf("nums[1][1] = %d\n", *(*(p + 1)+1));
	int x, y;
	scanf_s("%d%d", &x, &y);
	printf("x=%d,y=%d\n", x, y);
	swap(&x, &y);
	printf("x=%d,y=%d\n", x, y);
	return 0;
}
#include<string.h>
#include<stdio.h>
int main()
{
	char arr1[] = "abcde";
	char arr2[] = "abcdefg";
	char arr3[] = "abc";
	printf("%d %d %d \n",strcmp(arr1, arr2),strcmp(arr1,arr3),strcmp(arr1,arr1));
	return 0;
}
#include<stdio.h>
#include<string.h>
int *as(int x,int y)
{
	int z = x + y;
	return &z;
}
int* az(int x, int y)
{
	int z = x + y;
	int* p = &z;
	return p;
}
int main()
{
	int x, y;
		scanf_s("%d%d", &x, &y);
	int* p = as(x, y);
	printf("x+y=%d\n", *p);
	printf("x+y=%d\n", *az(x, y));
	return 0;
}
