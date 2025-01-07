// WAP to count digits of a given number
#include <stdio.h>
int main()
{
    int count = 0,n, number;
    printf("Enter the number:");
    scanf("%d", &number);
    n=number;
    while (n>0)
    {   
       
        
            
            count++;
        
        n = n/10;
    }
       printf("the digits in %d is %d",number,count);
    return 0;
}