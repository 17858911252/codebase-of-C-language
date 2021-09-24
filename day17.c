#include <stdio.h>
int getPeachNumber(int n)
{
    int num;
    if (n == 10)
    {
        return 1;
    }
    else
    {
        num = (getPeachNumber(n + 1) + 1) * 2;
        printf("第%d天所剩桃子%d个\n", n, num);
    }
    return num;
}
int main()
{
    int num = getPeachNumber(1);
    printf("猴子第一天摘了:%d个桃子。\n", num);
    return 0;
}
