#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main（）
{	
typedef unsigned int ut;
	ut a= -50;
	printf("%d\n", a);
	double a = 3.14;
	double* p = &a;
	*p = 5.55;
	printf("%lf\n", a);
        return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
struct book
{
	char name[20];
	double price;
	int  numble;
};
int main()
{
	struct book B = { "一千零一夜", 50.80, 100 };
	printf("书名：%s\n", B.name);
	printf("价格：%lf\n", B.price);
	printf("库存：%d\n", B.numble);
	B.numble = 0;
	printf("积存：%d\n", B.numble);
	struct book* b = &B;
	printf("%s\n", (*b).name);
	printf("%s\n", b->name);
	strcpy(B.name, "天方夜谭");
	printf("%s\n", B.name);
	return 0;
}
