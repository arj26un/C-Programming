// WAP to print first 'n' natural number using do-while loop
#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("\nEnter the number:");
    scanf("%d", &n);
    do
    {
        printf("%d is the is the natural number \n", i);

        i++;

    } while (i <= n);

    return 0;
}