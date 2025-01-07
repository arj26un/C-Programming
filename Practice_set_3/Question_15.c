// Check the number is divisible by 5 or not
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    if (number % 5 == 0)
    {
        printf("%d is divisible by 5", number);
    }
    else
    {
        printf("%d is not divisible by 5", number);
    }
    return 0;
}