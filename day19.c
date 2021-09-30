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
