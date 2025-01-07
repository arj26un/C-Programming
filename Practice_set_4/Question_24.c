// WAP to print the sum of even place digit of a number;
#include <stdio.h>
int main()
{
    int number, reminder, sum = 0;
    printf("Enter the number:");
    scanf("%d", &number);
    int n = number;
    for (int i = 1; number > 0; i++)
    {
        reminder = number % 10;
        if (i % 2 != 0)
        {
            sum = sum + reminder;
        }
        number = number / 10;
    }
    printf("the sum of even digits of %d is %d", n, sum);
    return 0;
}
