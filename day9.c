#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
void game()
{
	int ret = rand() % 100 + 1;
	int guess = 0;
	printf("猜一个数字：");
	while (1)
	{
		scanf("%d", &guess);
		if (guess < ret)
			printf("猜小了,继续猜：");
		else if (guess > ret)
			printf("猜大了，继续猜：");
		else
		{
			printf("猜对了");
			break;
		}
	}
}
	void menu()
	{
		printf("1.play\n");
		printf("0.exit\n");
	}

	int main()
	{
		int input = 0;
		srand((unsigned int)time(NULL));
		do
		{
			menu();
			printf("请选择:");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				game();
				Sleep(1500);
				system("cls");
				break;
			case 0:
				printf("退出游戏\n");
				Sleep(1500);
				system("cls");
				break;
			default:
				printf("选择错误，重新选择\n");
				Sleep(1500);
				system("cls");
				break;
			}
		} while (1);
		return 0;
	}
	
