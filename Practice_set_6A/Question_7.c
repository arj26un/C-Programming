/*WAP to print (using function)
  *
  * * *
  * * * * *

  */
#include <stdio.h>
int loop(int n);

int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    loop(number);
    return 0;
}
int loop(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf(" ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
