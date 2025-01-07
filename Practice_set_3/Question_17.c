// WAP to print the absolute value of a number eg: 7 = 7,-8=8
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
     if (number<0)
     {
        int Changed_value = (-1)*number;
        printf("the absolute value of %d is %d", number,Changed_value);
     }
     else{
        printf("the absolute value of %d is %d", number,number);
     }
     
    return 0;
}