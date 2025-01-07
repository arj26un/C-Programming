/*WAP to print pascal triangle
           1
         1   1
       1   2   1
     1   3   3   1
   1   4   6   4   1  
*/

#include <stdio.h>

int factorial(int p);
int combination(int n, int r);
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    for (int i = 0; i <= number; i++)
    {
        for (int j = 0; j <= number - i - 1; j++)
        {
            printf("  ");
        }

        for (int j = 0; j <= i; j++)
        {

            int result = combination(i, j);
            printf("%4d", result);
        }
        printf("\n");
    }

    return 0;
}
int combination(int n, int r)
{
    int result = (factorial(n)) / ((factorial(r)) * (factorial(n - r)));
    return result;
}
int factorial(int p)
{
    if (p == 1 || p == 0)
    {
        return 1;
    }
    int fact = p * factorial(p - 1);
    return fact;
}