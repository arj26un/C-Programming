// WAP to print AP 1,3,5,7,9,.......,n
// an=a+(n-1)d
#include <stdio.h>
int main()
{
    int number, n=1;
    printf("Eneter the number:");
    scanf("%d", &number);
    printf("The AP is =");
    for (int i = 1; i <= number; i++)
    {
         
        printf("%d\t", n);
        n = n + 2;
    }

    return 0;
}