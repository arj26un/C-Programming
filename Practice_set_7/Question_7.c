/*
Try problem 3 using call by value and verify
that it does not change the value of the said variable 
(WAP to change the value  of a variable to 'n'
 times of its current value)
*/
#include<stdio.h>
int function(int ptr,int n);
int main(){
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    int i = 5;
    printf("Enter the number whoose value you want:");
    scanf("%d",&i);

    printf("The value of i is %d\n", i);
    function(i,number);
    printf("The value of i is %d", i);

}
int function(int ptr, int n){
       ptr = ptr *n;
       return ptr;
    }

/*
it does not work beacauyse the copy of value is passed in function 
not the addresss of the function which makes the changes in main function
using call by reference*/