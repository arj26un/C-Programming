/*WAP for nth fibobnocci series
first 10 numbers = 0+1+1+2+3+5+8+13+21+34
f(2) = f(0)+f(1)
f(3) = f(1)+f(2)*/
#include <stdio.h>
int main()
{

    int number, f_0 = 0, fibonocci_number, f_1 = 1;
    printf("Enter the number:");
    scanf("%d", &number);
    if (number == 1 || number == 2)
    {
        printf("the fibonocci number of term %d is %d \n ", number, number - 1);
    }
    else if (number < 0)
    {
        printf("number is invalid");
    }
    else
    {
        for (int i = 0; i < number - 2; i++)
        {
            fibonocci_number = f_0 + f_1;
            f_0 = f_1;
            f_1 = fibonocci_number;
        }
        printf("the fibonocci number of term  %d is %d \n ", number, fibonocci_number);
    }

    return 0;
}