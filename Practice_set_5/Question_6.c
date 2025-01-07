/* WAP to print
     1
     12
     123
     12
     1
 */
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)

    {
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    for (int i = number-1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}