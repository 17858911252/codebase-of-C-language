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
 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 8;
	int c = a&&b;
	printf("%d\n", c);
	c = a || b;
	printf("%d\n", c);
	int x = 0;
	int y = 0;
	scanf("%d%d", &x,&y);
	int max = x > y ? x : y;
	printf("%d\n", max);
		return 0;
}
  
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void test()
{
	static int a = 1;
	a++;
	printf("%d\n", a);
}
static int b = 0;
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}
