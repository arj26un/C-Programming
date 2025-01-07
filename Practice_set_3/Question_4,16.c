// WAP to check a year is leap year or not
#include <stdio.h>
int main()
{
    int year;
    printf("Enetr the year =");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {

        printf(" %d year is a leap year ", year);
    }
    else
    {
        printf("The year is not a leap  year");
    }
    return 0;
}