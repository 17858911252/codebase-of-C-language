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
