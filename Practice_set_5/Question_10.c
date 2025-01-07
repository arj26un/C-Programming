// WAP to print a right traingle using alphabets and number

#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number :");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        int a = 65;
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c", a);
                a++;
            }
            else
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }

    return 0;
}