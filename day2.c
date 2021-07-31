#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c', '\0' };
	int  arr3[] = { 1, 2 };
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d%d\n", arr3[0], arr3[1]);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}
  
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
int main()
{
	printf("c:\\test1.cpp\n");
	printf("%c\n",'\'');
	printf("%s\n","\"");
	printf("%d\n", strlen("c:\test\32\test.c"));
	printf("%c\n", '\32');
	printf("%c\n" ,'\x61');
	return 0;
}
