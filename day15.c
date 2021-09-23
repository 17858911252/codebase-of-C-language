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
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d%d,", &a, &b);
	printf("%d\n", a > b ? 1:0);
	return 0;
}
#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i < 5; i++)
    {
        /* 观察每行的空格数量，补全循环条件 */
        for (j = i; j < 5; j++)
        {
            printf(" ");    //输出空格
        }
        /* 观察每行*号的数量，补全循环条件 */
        for (k = 0; k < 2 * i - 1; k++)
        {
            printf("*");   //每行输出的*号
        }
        printf("\n");     //每次循环换行
    }
    return 0;
}
