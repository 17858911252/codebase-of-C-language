#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	if (n < 0)
		n *=-1;
	void swap(int n);
	swap(n);
	return 0;
}
void swap(int n)
{
	/*if (n != 0)
	{
		swap(n/10);
		putchar(n%10 + 48);
	}*/
	int i;
	//if ((i = n / 10) != 0)
	//	swap(i);
	//	putchar(n % 10 + 48);
	if ((i = n / 10) == 0)
		putchar(n % 10 + 48);
	else
	{
		swap(i);
		putchar(n % 10 + 48);
	}

}
#include<stdio.h>
#include<math.h>
int main()
{
	int swap(char a[]);
	char a[100];
	gets_s(a);
	printf("转化为十进制为%d", swap(a));
	return 0;
}
int swap(char a[])
{
	int i;
	int ten = 0;
	for (i = 0; a[i] != '\0'; i++)
	{

		if (a[i] >= '0' && a[i] <= '9')
			ten += (a[i]-48) * pow(16, i);
		else
			ten += (a[i]-55) * pow(16, i);	
	}
	return ten;
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	void fac(char a[10][100],int b[]);
	void tac(char a[10][100], int b[]);
	void search(char a[10][100], int b[]);
	char a[10][100];
	int b[10];
	fac(a, b);
	tac(a, b);
	search(a, b);


}
void fac(char a[11][100], int b[])
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		gets_s(a[i]);
		scanf_s("%d", &b[i]);
	}
}
void tac(char a[11][100], int b[])
{
	int i, j,t;
	char c[100];
	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9 - i;j++)
			if (b[j] > b[j + 1])
			{
				t = b[j];
				b[j] = b[j + 1];
				b[j + 1] = t;
				strcpy(c,a[j]);
				strcpy(a[j], a[j + 1]);
	            strcpy(a[j + 1], c);
			}
}
void search(char a[10][100], int b[])
{
	int left = 0,right=9;
	int n;
	int mid;
	scanf("%d", &n);
	while (left <= right)
	{
		 	mid = (left + right) / 2;
		if (n < b[mid])
			right = mid - 1;
		else if (n > b[mid])
			left = mid + 1;
		else
			break;
	}
	if (left > right)
	{
		printf("该职工号不存在\n");
		system("pause");
	}
	puts(a[mid]);

}#include<stdio.h>
int main()
{
	float averge(int a[10][5], int i);
	float averge1(int a[10][5], int i);
	void search(int a[10][5]);
	float rank(int b[]);
	int a[10][5];
	int i, j,b[10];
	for (i = 0; i <= 9; i++)
	{
		printf("请输入第%d个学生成绩:\n", i+1);
		for (j = 0; j <= 4; j++)
			scanf_s("%d", a[i][j]);
		printf("该同学平均成绩为%f",averge(a,i));
		b[i] = averge(a, i);
	}
	for (i = 0; i <= 4;i++)
		printf("第%d门课的平均分为%f", i + 1, averge1(a, i));
	search(a);
	printf("平均分方差为%f", rank(b));
	return 0;
}
float averge(int a[10][5],int i)
{
	int j;
	float sum = 0;
	for (j = 0; j <= 4; j++)
		sum += a[i][j];
		return sum / 5;
}
float averge1(int a[10][5], int i)
{
	int j;
	float sum=0;
	for (j = 0; j <= 9; j++)
		sum += a[j][i];
	return sum / 10;
}
void search(int a[10][5])
{
	int i, j,max=a[0][0],i1,j1;
	for(i=0;i<=9;i++)
		for (j = 0; j <= 4; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				i1 = i;
				j1 = j;
			}
		}
	printf("%d位同学第%d个课程分数最高，最高分为%d", i1 + 1, j1 + 1, max);
}
float rank(int b[])
{
	int i;
	float sum1=0,sum2=0,sum=0;
	for (i = 0; i <= 9; i++)
	{
		sum1 += b[i] * b[i];
		sum2 += b[i];
	}
	sum = (sum1 - (sum2 / 10) * (sum2 / 10)) / 10;
	return sum;
}
#include<stdio.h>
int main()
{
	float p(int n, float x);
	int n;
	float x, sum;
	scanf_s("%d%f", &n,&x);
	sum = p(n, x);
	printf("%f\n", sum);
	return 0;
}
float p(int n, float x)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return x;
	if (n >= 1)
		return (2 * n - 1) * x - p(n - 1, x) - (n - 1) * p(n - 2, x) / n;
}
#include<stdio.h>
int main()
{
	void add(char a[],char b[]);
	char a[100], b[100];
	gets_s(a);
	add(a,b);
	puts(b);
	return 0;
}
void add(char a[], char b[])
{
	int max=0,sum=0,i,j;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] != ' ')
			sum++;
		else
		{
			if (sum > max)
			{ 
				max = sum;
				j = i+1;
			}
			sum = 0;
		}
	}
	for (i = 0; a[j] != ' '&&a[j]!='\0'; j++, i++)
		b[i] = a[j];
	b[i] = '\0';
}
#include<stdio.h>
int main()
{
	void add(char a[]);
	char a[10];
	gets_s(a);
	add(a);
	return 0;
}
void add(char a[])
{
	int i;
	for (i = 0; a[i] != '\0'; i++)
		printf("%c ", a[i]);
}
#include<stdio.h>
int main()
{
	void swap(char a[], char b[]);
	char a[100], b[100];
	gets_s(a);
	swap(a, b);
	puts(b);
	return 0;
}
void swap(char a[], char b[])
{
	int i,j;
	for(i=0,j=0;a[i]!='\0';i++)
		if (a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' || a[i] == 'i' || a[i] == 'I' || a[i] == 'o' || a[i] == 'O' || a[i] == 'u' || a[i] == 'U')
		{
			b[j] = a[i];
			j++;
   }
	b[j] = '\0';
}
#include<stdio.h>
int main()
{
	void attach(char a[100], char b[100]);
	char a[100], b[100];
	gets_s(a);
	gets_s(b);
	attach(a, b);
	puts(a);
	return 0;
}
void attach(char a[100], char b[100])
{
	int i,j;
	for (i = 0; a[i] != '\0'; i++);
	for (j = 0; b[j] != '\0'; i++, j++)
		a[i] = b[j];
	a[i] = '\0';
}
#include<stdio.h>
int main()
{
	void change(char a[100],char b[100]);
	char a[100];
	char b[100] = { 0 };
	gets_s(a);
	change(a,b);
	puts(b);
	return 0;
}void change(char a[100],char b[100])
{
	int i,j;
	for (i = 0; a[i] != '\0'; i++);
	i--;
	for (j = 0; i >= 0; j++, i--)
		b[j] = a[i];
	b[j] = '\0';
}
#include<stdio.h>
int main()
{
	int i, j;
	void swap(int a[3][3],int b[3][3]);
	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int b[3][3];
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
    swap(a,b);
	printf("\n");
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
	return 0;
}
void swap(int a[3][3],int b[3][3])
{
	int i, j;
	for(i=0;i<=2;i++)
		for (j = 0; j <= 2; j++)
			b[j][i] = a[i][j];
}
#include<stdio.h>
#include<math.h>
int main()
{
	int judge(int n);
	int n;
	scanf_s("%d", &n);
	int flag=judge(n);
	if (flag == 1)
		printf("%d是素数\n", n);
	else
		printf("%d是非素数\n", n);
	return 0;
}
int judge(int n)
{
	int i;
	for (i = 2; i <= sqrt(n);i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
