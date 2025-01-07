// WAP to make own power function
#include <stdio.h>
int power(int a, int b);
int main()
{
    int number, raised_power;
    printf("Enter the number:");
    scanf("%d", &number);
    printf("Enter the raised to power:");
    scanf("%d", &raised_power);
    int result = power(number, raised_power);
    printf("%d raised to power %d is %d", number, raised_power, result);
    return 0;
}
int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    return a * power(a, b - 1);
}