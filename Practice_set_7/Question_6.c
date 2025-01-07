/*
WAP to print the value of a variable 'i' by using "pointer to pointer"
type of variable 
 */
#include<stdio.h>
int main(){
    int a=78899;
    int* ptr = &a;
    int** ptr1 = &ptr;
    printf("The value of number is: %d\n",a);
    printf("The value of number is: %d\n",*ptr);
    printf("The value of number is: %d\n",**ptr1);
return 0;
}
