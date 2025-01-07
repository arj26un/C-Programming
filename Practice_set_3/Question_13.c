// WAP to check if a given number is natural number or not
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    if (number > 0)
    {
        printf("The number is a natural number");
    }
    else
    {
        printf("The number is not a natural number");
    }
}
