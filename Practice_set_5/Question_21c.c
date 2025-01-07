/*WAP to print 
          A 
        A B C 
      A B C D E 
    A B C D E F G 
  A B C D E F G H I 
  */


#include <stdio.h>
int main()
{
    int number;

    printf("Enter the number:");
    scanf("%d", &number);
    // int n=2*number-1;

    for (int i=1; i <= number; i++)
    {   
        for (int j = number; j >= i; j--)
        {
            printf("  ");
        }
        for (int k=1; k <= i; k++)
        {
            printf("%c ",k+64);
        }
        for (int k=1; k <= i-1; k++)
        {
            printf("%c ",i+k+64);
        }

        printf("\n");
        
    }

    return 0;
} 