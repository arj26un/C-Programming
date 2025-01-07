/*
WAP to change the value  of a variable to 'n' times of its current value
 */ 
#include<stdio.h>
int function(int* ptr,int n);
int main(){
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    int i = 5;
    printf("Enter the number whoose value you want:");
    scanf("%d",&i);
    int* ptr = &i;
    printf("The value of i is %d\n", i);
    function(ptr,number);
    printf("The value of i is %d", i);

}
int function(int* ptr, int n){
       *ptr = *ptr *n;
       return *ptr;
    }

