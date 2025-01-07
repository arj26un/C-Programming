//Write a recurrsion function to calculate the sum of first 'n' natural numbers.
#include<stdio.h>
int function(int a);
int main (){
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    int sum = function(number);
    printf("The sum of first %d natural numbers = %d ",number,sum);
    return 0;
} 
int function(int a){
    
    if(a==1){
        return 1;
    }
    return a+function(a-1);
}