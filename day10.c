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
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int m;
	int n;
	scanf("%d%d", &m, &n);
	int t;
	while (m % n != 0)
	{
		t = m % n;
		m = n;
		n = t;
	}
	printf("最大公约数是%d\n", t);
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	int j;
	int count = 0;
	for (i = 101; i <= 200; i += 2)
	{
		int flag = 1;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n共有%d个素数\n", count);
	return 0;
}
