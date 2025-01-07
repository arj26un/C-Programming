// WAP to enter the number unit its multiple of 7
#include <stdio.h>
int main()
{
    int number;
    while (1)
    {
        printf("Enter the number:");
            scanf("%d",&number);
        if (number % 7 == 0)
        {
            break; // exit the loop if it is multipleof 7
        }
    }

    return 0;
}