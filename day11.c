#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	int j;
	int count=0;
	for (i = 101; i <= 200; i+=2)
	{
		
		for (j = 2; j <i; j++)
		{
			if (i % j == 0)
			{
				break;
			}

		}
		if (j == i)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n共有%d个素数", count);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	int count = 0;
	for (i = 1000; i <= 2021; i++)
	{
		if (i % 4 == 0)
		{
			if (i % 100 != 0)
			{
				printf("%d ", i);
				count++;
			}
		}
		if (i % 400 == 0)
		{
			printf("%d ", i);
			count++;
		}
	  }
	printf("\n共有%d个闰年\n", count);
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 300");
again:
	printf("电脑将在5分钟后关机,输入NO取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "NO") == 0)
		system("shutdown -a");
	else
		goto again; 
		return 0;
}


