/*WAP to print 
          1
        1 2 3
      1 2 3 4 5
    1 2 3 4 5 6 7
  1 2 3 4 5 6 7 8 9
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
            printf("%d ",k);
        }
        for (int k=1; k <= i-1; k++)
        {
            printf("%d ",i+k);
        }

        printf("\n");
        
    }

    return 0;
} 