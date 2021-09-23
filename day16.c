#define _CRT_SECURE_NO_WARNINGS#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
    int date = 0;
    int year ;
    printf("year=");
    again:
    scanf("%d", &year);
    if (year < 1)
    {
        printf("error");
        Sleep(2000);
        system("cls");
        goto again;
    }
    scanf("%d", &year);
    int month;
    printf("month=");
    again1:
    scanf("%d", &month);
    if (month > 12 || month < 1)
    {
        printf("error");
        Sleep(2000);
        system("cls");
        goto again1;
    }
    again2:
    int day;
    printf("day=");
    scanf("%d", &day);
    if ((month == 2 && day > 29) || (day > 31))
    {
        printf("error");
        Sleep(2000);
        system("cls");
        goto again2;
    }
    switch (month)
    {

    case 12:date += 30;

    case 11:date += 31;

    case 10:date += 30;

    case 9:date += 31;

    case 8:date += 31;

    case 7:date += 30;

    case 6:date += 31;

    case 5:date += 30;

    case 4:date += 31;

    case 3:

        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)

        {

            date += 29;

        }

        else

        {

            date += 28;

        }
    case 2:

        date += 31;

    case 1:

        date += day;

        printf("%d年%d月%d日是该年的第%d天", year, month, day, date);

        break;

    }

    return 0;

}
