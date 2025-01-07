// WAP to find greatest from   four numbers taken from user
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("enter the number 1st:");
    scanf("%d", &a);

    printf("enter the number 2nd:");
    scanf("%d", &b);

    printf("enter the number 3rd:");
    scanf("%d", &c);

    printf("enter the number 4th:");
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("%d is greatest number ", a);
            }
            else
            {
                printf("%d is greatest number", d);
            }
        }
        else if (c > d)
        {
            printf("%d is greatest number ", c);
        }
        else
        {
            printf("%d is greatest number", d);
        }
    }
    else if (b > a)
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("%d is greatest number", b);
            }
            else
            {
                printf("%d is greatest number", d);
            }
        }
        else if (c > d)
        {
            printf("%d is greatest number ", c);
        }
        else
        {
            printf("%d is greatest number", d);
        }

    }
    else{
        printf("greatest number is more than once");
    }


return 0;
}