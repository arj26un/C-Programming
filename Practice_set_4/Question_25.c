// WAP to print reverse of a givem number
#include <stdio.h>
int main()
{
    int number, reminder, reverse = 0;
    printf("Enter the number:");
    scanf("%d", &number);
    int n = number;
    while (number > 0)
    {
        reminder = number % 10;
        reverse = reverse*10 + reminder;
        number = number / 10;
    }
    printf("the reverse of %d is %d",n,reverse);

    return 0;
}