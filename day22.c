#include<stdio.h>
int main()
{
	int m, n,k;
	scanf_s("%d%d", &m, &n);
	while (1)

	{
		 k = m % n;
		 if (k == 0)
			 break;
		 m = n;
		 n = k;
		 
	}
	printf("最大公因数为%d",n);
	return 0;

}
