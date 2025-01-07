// WAP to print GP of 1,2,4,8,16
#include <stdio.h>
int main()
{
    int a = 1, r = 2, terms;
    printf("Enter the number:");
    scanf("%d", &terms);
    printf("The series of GP is ::\t");
    for (int i = 1; i <= terms; i++)
    {
        printf("%d\t",a);
        a = (a * r);
    }

    return 0;
}