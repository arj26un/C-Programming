// WAP to calculate the factorial of a given number using a for loop
#include <stdio.h>
 int main(){
    int number, factorial = 1;
    printf("enter the number:");
    scanf("%d",&number);
    printf("The factorial of %d is \n %d ",number,number);
      

    for (int i = 1; i<=number; i++)

    { 
        if(i<number){
            printf("X %d ",number- i);
        }
         
      factorial= factorial*i;
    
      
    }
     printf("= %d",factorial);
    return 0;

 }