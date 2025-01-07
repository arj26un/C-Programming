// WAP to print the smallest number from three numbers
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the number 1st:");
    scanf("%d", &a);
    printf("Enter the number 2nd:");
    scanf("%d", &b);
    printf("Enter the number 3rd:");
    scanf("%d", &c);
    if(a < b)
    {
        if(a < c)
        {
            printf("%d is the smallest number", a);
        }
        else
        {
            printf("%d is the smallest number", c);
        }
    }
    else
    {
        if(b < c)
        {
            printf("%d is the smallest number", b);
        }
        else
        {
            printf("%d is the smallest number", c);
        }
    }

    return 0;
}
