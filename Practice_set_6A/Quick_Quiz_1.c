// WAP to print factorial of any number
#include <stdio.h>
int function(int term);

int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    printf("The factoroal of number %d  ", number);
    int factorial = function(number);
    printf("= %d", factorial);
}
int function(int number)
{

    if (number == 0 || number == 1)
    {
        return 1;
    }

    return  number* function(number - 1);
}