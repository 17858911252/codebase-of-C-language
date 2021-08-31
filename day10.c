#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
int i = 0;
for (i = 1; i <= 100; i++)
{
    if (i % 3 == 0)
    {
        printf("%d\n", i);
    }
}
    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int m;
	int n;
	int min;
	scanf("%d%d", &m, &n);
	if (m > n)
		min = n;
	else
		min = m;
	while (1)
	{
		if (m % min == 0 && n % min == 0)
		{
			printf("最大公约数是%d\n", min);
			break;
		}
		min--;
	}
	return 0;
}
