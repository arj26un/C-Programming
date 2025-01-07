/* WAP to print
 *
 * * *
 * * * * *
 */
#include <stdio.h>
int main()
{
    int number;

    printf("Enter the number:");
    scanf("%d", &number);
    int n = number + 1;
   

    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            if (i + j >= n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for (int j = 1; j <= i - 1; j++)
        {
            
                printf("* ");
            }
            printf("\n");
        }

        return 0;
    }