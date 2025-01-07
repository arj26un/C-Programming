// WAP to take number continuously as input from user until its an odd number
#include <stdio.h>
int main()
{
   
    while (1)
    { int number;

        printf("Enter the number:");
        scanf("%d",&number);
        if(number%2!= 0)
        {break;// odd number entered exit the loop
        }
    }

    return 0;
}