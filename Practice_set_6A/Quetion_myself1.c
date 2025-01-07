// WAP using function to find average of n numbers.
#include <stdio.h>
float number_typing(int number);
float average(int a,float b);
int main()
{
    int number;
    printf("Enter how many numbers average you want to find:");
    scanf("%d", &number);

    float loop = number_typing(number);

    printf("The average of %d numbers is %f ", number, loop);

    return 0;
}
float average(int a, float b)
{
    float solution = a / b;
    return solution;
}
float number_typing(int number)
{
    int getting_number, sum = 0;

    for (int i = 1; i <= number; i++)
    {
        printf("Enter the number %d:",i);
        scanf("%d", &getting_number);
        sum += getting_number;
    }
    printf(" The sum of all number is %d\n", sum);
    float solution = average(sum,number);
    return solution;
}