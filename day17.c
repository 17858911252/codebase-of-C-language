#include <stdio.h>
int getPeachNumber(int n)
{
    int num;
    if (n == 10)
    {
        return 1;
    }
    else
    {
        num = (getPeachNumber(n + 1) + 1) * 2;
        printf("第%d天所剩桃子%d个\n", n, num);
    }
    return num;
}
int main()
{
    int num = getPeachNumber(1);
    printf("猴子第一天摘了:%d个桃子。\n", num);
    return 0;
}
#include <stdio.h>

float taxifee(int clock, int miles)
{
    float money;
    if (miles <= 3)
    {
        money = 14;
        printf("费用为14\n");
    }
    else
    {
        if (clock >= 23 || clock < 5)
        {
            money = 13 + 1 + 2.3 * (miles - 3) * 1.2;
            printf("夜间车费为：%f\n", money);
        }
        else
        {
            money = 13 + 1 + 2.3 * (miles - 3);
            printf("日间车费为：%f\n", money);
        }
    }

    return money;
}
int main()
{
    printf("打的总费用：%.1f\n", taxifee(9, 12) + taxifee(1, 12));
    return 0;
}
#include<stdio.h>
int main()
{
	char arr1[] = { 'a','b','c','\0'};
	char arr2[] = "abc";
		printf("%s\n", arr1);
		puts(arr2);
		char a = getchar();
		putchar(a);
		return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[10] = "abc";
	char arr2[10] = "ab";
	char arr3[10] = "abcd";
	char arr4[10] = "abc";
	printf("a的ASCII是%d\n", 'a');
	printf("%d\n", strcmp(arr1, arr2));
	printf("%d\n", strcmp(arr1, arr3));
	printf("%d\n", strcmp(arr1, arr4));
	strcpy_s(arr1, arr3);
	printf("%s\n", arr1);
	return 0;
}
#include<stdio.h>
int main()
{
	//计算1-1/2+1/3-1/4+-----1/100
	int deno = 2;
	int sign = 1;
	double sum = 1;
	double term;
	for (deno = 2; deno <= 100; deno++)
	{
		sign *= -1;
		term = sign * (1.0/deno);
		sum += term;
	}
	printf("1-1/2+1/3-1/4+ ---- -1/100=%lf\n", sum);
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand((unsigned)time(NULL));
	int i;
	int j;
	for (i = 1; i <= 100; i++)
	{
		int j = rand() % 200 + 1;
		printf("%-5d", j);
		if (i %10 == 0)
			printf("\n");
	}
	return 0;
}
