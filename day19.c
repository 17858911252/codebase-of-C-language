#include<stdio.h>
struct book
{
	char name[100];
	double  price;
	int page;
}str[3] = {
	{"English",25.6,250},
	{"Chinese",33.2,325},
	{"Math",43.1,456}
},*ch;

struct data
{
	char a;
	struct day
	{
		int arr[20];
		int* p;
	}s2;
}s1;
int main()
{
	printf("%c\n", str[2].name[3]);
	scanf_s("%d", &s1.s2.arr[0]);
	s1.s2.p = &s1.s2.arr[0];
	printf("arr[0]=%d", *(s1.s2.p));
	ch = str;
	printf("&d\n", (*ch).page);
	return 0;
}
#include<stdio.h>
int main()
{
	double p = 1000;
	double P;
	int way;
	double r1, r2, r3, r5, rr;
	r1 = 0.015;
	r2 = 0.021;
	r3 = 0.0275;
	r5 = 0.03;
	rr = 0.0035;
	int m = 1;
	while (m <= 5)
	{
		scanf_s("%d", &way);
		switch (way)
		{
		case 1:
			P = p * (1 + 5 * r5);
			break;
		case 2:
			P = (p * (1 + 2 * r2)) * (1 + 3 * r3);
			break;
		case 3:
			P = (p * (1 + 3 * r3)) * (1 + 2 * r2);
			break;
		case 4:
			int i;
			for (i = 1; i <= 5; i++)
			{
				p = p * (1 + r1);
				P = p;
			}
			break;
		case 5:
			int j;
			for (j = 1; j <= 20; j++)
			{
				p = p * (1 + rr / 4);
				P = p;
			}
			break;
		}
		printf("方法%d的本息和P=%lf\n",m, P);
		m++;
	}
	return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
	double d = 300000;
	double p = 6000;
	double r = 0.01;
	double m;
	double a = p / (p - d * r);
	double b = 1 + r;
	m = log(a) / log(b);
	printf("%.1lf\n", m);
	return 0;
 #include<stdio.h>
int main()
{
	char c1, c2, c3, c4, c5;
	c1 = 'G';
	c2 = 'l';
	c3 = 'm';
	c4 = 'r';
	c5 = 'e';
	putchar(c1);
	putchar(c2);
	putchar(c3);
	putchar(c4);
	putchar(c5);
	printf("\n%c %c %c %c %c\n", c1, c2, c3, c4, c5);
	return 0;
}
	#include<stdio.h>
#include<math.h>
int main()
{
	double r ,L1,S1,S2,V1,V2;
	int h ;
	scanf_s("%lf%d", &r, &h);
	L1 = 2 * 3.14 * r;
	S1 = 3.14 * pow(r, 2);
	S2 = 4 * 3.14 * pow(r, 2);
	V1 = 3.14 * pow(r, 2)*4/3;
	V2 = 3.14 * pow(r, 2) * h;
	printf("圆周长L1=%.2lf\n圆面积S1=%.2lf\n圆球表面积S2=%.2lf\n圆球体积V1=%.2lf\n圆柱体积V2=%.2lf\n", L1,S1, S2, V1, V2);
	return 0;
}
	#include<stdio.h>
int main()
{
	int c1, c2;
	c1=getchar();
	c2=getchar();
	putchar(c1);
	putchar(c2);
	printf("%d\n", c1);
	return 0;

}
