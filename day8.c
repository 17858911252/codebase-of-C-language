#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 0;
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
			left = mid + 1;
		else if (arr[mid]>k)
			right = mid - 1;
		else
		{
			printf("要查找的k值下标为为%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("该值在数组中不存在\n");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>
int main()
{
	char arr1[] = "welcome to china";
	char arr2[] = "################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{

		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//睡眠一秒
		system("cls");//清空屏幕
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>
int main()
{
	char password[20] = "0";
	int i = 0;
	for (i = 1; i <= 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", &password);
		if (strcmp(password, "123456") == 0)
		{
			printf("密码正确\n");
			break;
		}
		else
		{
			printf("密码错误,请重试\n");
			Sleep(1300);
			system("cls");
			Sleep(500);
		}
	}
	if (i != 4)
		printf("登录成功\n");
	if (i == 4)
		printf("多次输入密码错误，请稍后再试\n");
		return 0;
}
