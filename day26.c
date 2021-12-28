#define _CRT_SECURE_NO_WARNINGS		
#include<stdio.h>
#include<stdlib.h>`
#include<string.h>
int main()
{
	FILE* fp1,*fp2,*fp3;
	char a [100];
	void  rank(char c[]);
	if ((fp1 = fopen("A.dat", "r")) == NULL)
	{
		printf("无法打开该文件\n");
		exit(0);
	}
	if ((fp2 = fopen("B.dat", "r")) == NULL)
	{
		printf("无法打开该文件\n");
		exit(0);
	}
	fgets(a, 50, fp1);
	int i = strlen(a);
	fgets(a+i ,50, fp2);
	rank(a);
	if ((fp3 = fopen("C.dat", "w+")) == NULL)
	{
		printf("无法打开该文件\n");
		exit(0);
	}
	fputs(a, fp3);
	rewind(fp3);
	char b[100];
	fgets(b,100, fp3);
	puts(b);
	fclose(fp1); fclose(fp2); fclose(fp3); 
	return 0;
}
void rank(char c[])
{
	int i, j, k;
	char ch;
	for (i = 0; i < strlen(c) - 1; i++)
	{
		k = i;
		for (j = i + 1; j < strlen(c); j++)
			if (c[j] < c[k])
				k = j;
		if(k!=i)
			{
				 ch = c[i];
				c[i] = c[k];
				c[k] = ch;
			}
	}
}
