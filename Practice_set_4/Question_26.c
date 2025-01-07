// WAP to print sum of a number its reverse number
#include <stdio.h>
int main()
{
    int number, reminder, reverse = 0, sum;
    printf("Enter the number:");
    scanf("%d", &number);
    int n = number;
    while (number > 0)
    {
        reminder = number % 10;
        reverse = reverse * 10 + reminder;
        number = number / 10;
    }
    printf("the reverse of %d is %d\n", n, reverse);
    sum = n + reverse;
    printf("The sum of %d and %d(reverse of %d) is %d ", n, reverse, n, sum);
    return 0;
}