#include<stdio.h>
int main()
{
	int num[] = { 1,2,3 };
	int *pa = &num[0];
	int *pb = &num[1];
	int *pc=&num[0];
	if (pa < pb)
		printf("pa指向的存储地址小于pb指向的存储地址\n");
	if (pa==pc)
		printf("pa和pc指向同一个地址\n");
	return 0;

}
#include<stdio.h>
int main()
{
	int num[] = { 1,2,3,4,5,6};
	int *p = num;
	int i;
	for (i = 0; i <= 5; i++)
	{
		printf("%d,", *(p+i));
	}
	return 0;
}
