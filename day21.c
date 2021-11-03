#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	int count=0;
	again:
	if (n <= 0 && n >= 100000)
		goto again;
	if (n / 10000!=0)
	{
		printf("%d ", n / 10000);
		count++;
	}
	if (n / 1000 != 0)
	{
		printf("%d ", n % 10000 / 1000);
		count++;
	}
	if (n/ 100 != 0)
	{
		printf("%d ", n % 1000 / 100);
		count++;
	}
	if (n / 10 != 0)
	{
		printf("%d ", n % 100 / 10);
		count++;
	}
	printf("%d\n", n % 10);
	count++;
	printf("%d ", n % 10);
	if (n / 10 != 0)
		printf("%d ", n % 100 / 10);
	if (n / 100 != 0)
		printf("%d ", n % 1000 / 100);
	if (n / 1000 != 0)
		printf("%d ", n % 10000 / 1000);
	if (n / 10000 != 0)
		printf("%d ", n / 10000);
	printf("\nn是%d位数\n", count);
	return 0;
}
#include<stdio.h>
int main()
{
	int f1 = 0, f2 = 1,f3,i;
	printf("%d %d ", f1, f2);
	for (i = 1; i <= 38; i++)
	{
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
	}
	return 0;

}
#include<stdio.h>
int main()
{
	int i,j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d  ", i,j , i * j);
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int m, n;
	scanf_s("%d%d", &m, &n);
	int t = m < n ? m : n;
	int k = m > n ? m : n;
	while (1)
	{
		
		if (m % t == 0 && n % t== 0)
			break;
		t--;
	}
	while (1)
	{
		if (k % m == 0 && k % n == 0)
			break;
		k++;
		
	}
	printf("最大公约数是%d,最小公倍数是%d", t,k);
	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	int sign = 1;
	double pi = 0.0, n = 1.0, term = 1.0;
	int count = 0;
	while (fabs(term) >= 1e-8)
	{
		pi = pi + term;
		n = n + 2;
		sign = -sign;
		term = -sign / n;
		count++;
	}
	pi = pi * 4;
	printf("pi=%10.8f  count=%d\n", pi,count);
	return 0;
}
#include<stdio.h>
int main()
{
	int a[10];
	int i, j,k,t;
	for (i = 0; i <= 9; i++) 
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i <= 8; i++)
	{
		k = i;
		for (j = i + 1; j <= 9; j++)
			if (a[k] > a[j])
				k = j;
		t = a[k];
		a[k] = a[i];
		a[i] = t;
	}
	for(i=0;i<=9;i++)
	{
		printf("%4d", a[i]);
	}
	return 0;
 }
#include<stdio.h>
int main()
{
	int i,j,t;
	int a[10];
	for (i = 0; i <= 9; i++)
		scanf_s("%d", &a[i]);
	for(i=0;i<=8;i++)
		for(j=0;j<=8-i;j++)
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
	for (i = 0; i <= 9; i++)
	{
		printf("%4d", a[i]);
	}
	return 0;
}
