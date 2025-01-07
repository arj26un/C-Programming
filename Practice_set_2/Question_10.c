//WAP to check if a number is odd or not
#include<stdio.h>
void main(){
    int number, result;
    printf("\nEnter the number ");
    scanf("%d",&number);
    result = number%2;
    printf("If the number is divisible by 2 then result is 0 which means the number is even otherwise oddd number \n\n\t\t\t THE RESULT IS %d",result );
    
}