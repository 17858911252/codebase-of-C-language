#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20], s2[20];
	gets_s(s1);
	gets_s(s2);
	int i;
	for (i = 0; s2[i] != '\0'; i++)
		s1[i] = s2[i];
	s1[i] = s2[i];
	puts(s1);
}
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20], b[10];
	gets_s(a);
	gets_s(b);
	int i,j;
	for (i = 0; a[i] != '\0'; i++);
		for (j = 0; b[j] != '\0'; j++, i++)
			a[i] = b[j];
		a[i] = '\0';
		puts(a);
	return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
	char c[20],d[20];
	int i;
	gets_s(c);
	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'A' && c[i] <= 'Z')
			d[i] = 155 - c[i];
		else if (c[i] >= 'a' && c[i] <= 'z')
			d[i] = 219 - c[i];
		else
			d[i] = c[i];
  }
	d[i] ='\0';
	puts(c);
	puts(d);
	return 0;
}
#include<stdio.h>
int main()
{
	int i, j ;
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");
		for (j = 0; j <= 4; j++)
			printf("* ");
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[3][80];
	int x = 0, y = 0, z = 0, t = 0, e = 0, i, j;
	for (i = 0; i <= 2; i++)
	{
		gets_s(a[i]);
	for (j = 0; a[i][j]!='\0'; j++)
	   {
		if (a[i][j] >= 'A' && a[i][j] <= 'Z')
			x++;
		else if (a[i][j] >= 'a' && a[i][j] <= 'z')
			y++;
		else if (a[i][j] >= '0' && a[i][j] <= '9')
			z++;
		else if (a[i][j] == ' ')
			t++;
		else
			e++;
	    }
     }
	
	printf("大写字母有%d个，小写字母有%d个，数字有%d个，空格有%d个，其他有%d个",x,y,z,t,e);
	return 0;

}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	int left = 0, right = 14, k;
	scanf_s("%d", &k);
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (k < a[mid])
			right = mid - 1;
		else if (k > a[mid])
			left = mid + 1;
		else
		{
			printf("该数是数组中第%d个元素的值\n", mid);
			break;
		}
	}
	if (left > right)
		printf("无此数\n");
	return 0;
}
#include<stdio.h>
int main()
{
	int a[3][4] = { {1,2,5,3},{2,6,7,1},{5,9,10,8} };
	int i,j,k=0,max,min;
	for (i = 0; i <= 2; i++)
	{
		max = a[i][0];
		for (j = 1; j <= 3; j++)
			if (a[i][j] > max)
			{
				max = a[i][j];
				k = j;
			}
		for (j = 1; j <= 2; j++)
		{
			min = a[0][k];
			if (a[j][k] < min)
			{
				min = a[j][k];
			}
		}
		if (max == min)
			printf("%d\n", a[i][k]);
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a[5] = { 8,6,5,4,1 };
	int i;
	for (i = 0; i <= 4; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 4; i >= 0; i--)
		printf("%d ", a[i]);
	return 0;
}
#include<stdio.h>
int main()
{
	int a[10] = { 33,29,25,21,19,15,12,8,4 };
	int i,j,k,t;
	scanf_s("%d", &a[9]);
	for (i = 0; i <= 8; i++)
	{
		k = i;
		for (j = i + 1; j <= 9; j++)
		{
			if (a[j] > a[k])
				k = j;
		}
		t = a[i];
		a[i] = a[k];
		a[k] = t;
	}
	for (i = 0; i <= 9; i++)
		printf("%d ", a[i]);
	return 0;
}
#include<stdio.h>
int main()
{
	int a[3][3] = {{2,3,4},{6,2,1} ,{4,9,0}};
	int i, j, sum1 = 0, sum2 = 0;
		for (i =0; i <= 2; i++)
			sum1 += a[i][i];
		for (i = 0, j = 2; i <= 2; i++, j--)
			sum2 += a[i][j];
	printf("sum1=%d  sum2=%d", sum1,sum2);
	return 0;
}
#include<stdio.h>
int main()
{
	int a[10];
	int i,j,k,t;
	for (i = 0; i <= 9; i++)
		scanf_s("%d", &a[i]);
	for (i = 0; i <= 8; i++)
	{
		k = i;
		for (j = i + 1; j <= 9; j++)
		{
			if (a[j] > a[k])
				k = j;
		}
		t = a[i];
		a[i] = a[k];
		a[k] = t;
	}
	for (i = 0; i <= 9; i++)
		printf("%d ", a[i]);
	return 0;
}
		




