#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	int sum = 0;
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(double));
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int a = 10;
	printf("%d\n", a);
	char b = 'B';
	printf("%c\n", b);
	double c = 3.141592;
	printf("%f\n", c)；
        #define d 200
	printf("%d\n", d);
	return 0;
}
