// WAP to check whether a given number is prime or not using do-while loop
#include <stdio.h>
int main()
{
    int number = 0, prime_number,i=1;
    printf("Enter the number:");
    scanf("%d",&prime_number);
    do
    {
        {
        if (prime_number % i == 0)
        {
            number++;
        }
        i++;
    }
    
    } while (i<=prime_number);
    
    
    if (number == 2)
    {
        printf("%d is a prime number", prime_number);
    }
    else
    {
        printf("%d is not a prime number", prime_number);
    }

    return 0;
}
