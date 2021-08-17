#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/*
	 int a=1;
	 while (a <= 100)
	 {
		 if (a % 2 == 1)
			 printf("%d\n", a);
		 a++;
	 }*/
	/*int a = 1;
	while (a <= 100)
	{
		printf("%d\n", a);
		a += 2;
	}*/
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int numble;
	scanf("%d", &numble);
	switch (numble)
	{
	case 1:
		printf("方案1\n");
		break;
	case 2:
		printf("方案2\n");
		break;
        default:
		printf("备用方案\n");
		break;
	}
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 10)
	{
		i++;
		if (i == 5)
			continue;
		printf("%d\n", i);
	}
	int ch;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}
