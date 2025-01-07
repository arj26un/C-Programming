// WAP to print sum of digits of a given number
#include <stdio.h>
int main()
{
    int number, sum = 0, reminder;
    printf("Enter the number:");
    scanf("%d", &number);
    int n= number;
    while (number > 0)
    {
        reminder = number % 10;
        sum = sum + reminder;
        number = number/10;
    }
  printf("the sum of digits of %d is %d",n,sum);
    return 0;
}