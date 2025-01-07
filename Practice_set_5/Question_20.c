/* WAP to print
      A
    A B
  A B C
A B C D
*/
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    int n= number + 1;
    for (int i = 1; i <= number; i++)
    {
        int a = 65;
        for (int j = 1; j <= number; j++)
        {
            if (i + j >= n)
            {
                printf("%c ", a);
                a++;
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}