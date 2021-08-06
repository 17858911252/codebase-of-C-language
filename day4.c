#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int b = ~a;
	printf("%d\n", b);
	int c = a++;
	printf("%d\n%d\n",a,c );
	 c = ++a;
	printf("%d\n%d\n", a, c);
	int d = (int)3.14;
	printf("%d\n", d);
	return 0;
}
