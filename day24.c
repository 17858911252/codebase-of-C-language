#include<stdio.h>
#define n 5
int main()
{
	int a[n][n] = { 0 };
	int x = 0, y, i,j;
	y = n / 2;
	a[x][y] = 1;
	int x1 = x;
	int y1 = y;
	for (i = 2; i <= n * n; i++)
	{
		x = x1- 1;
		y = y1 + 1;
		if (x < 0)
		x = n - 1;
		if (y > n - 1)
			y = 0;
		if (a[x][y]!=0)
		{
			x = x1+1;
			y = y1 ;
		}
		a[x][y] = i;
		x1 = x;
		y1 = y;
	}
	for (i = 0; i <= n - 1; i++)
	{
		for (j = 0; j <= n - 1; j++)
			printf("%3d ", a[i][j]);
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a[10][10];
	int i, j;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
				a[i][j] = 1;
			else if (j > i)
			{
				a[i][j] = 0;
				break;
			}
			else
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			if (a[i][j] != 0)
				printf("%3d  ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], b[100];
	int i;
	gets_s(a);
	gets_s(b);
	for (i = 0; a[i] == b[i]; i++);
	printf("%d", a[i] - b[i]);
	return 0;
}
