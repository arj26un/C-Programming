/*
WAP to print the address of a variable. 
Use this address to get the value of variable
*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    int* address = &number;
    printf("The address of the number is %p\n", address);
    printf("The address of the number is %u\n", &number);
    printf("The value  of the number using address is %d\n", *address);
    return 0; 
}
// int main(){
//     int x,*ptr;
//     ptr = &x;
//     *ptr = 0;//means x=0;
//     printf(" x=%d\n",x);
//     printf("*ptr = %d\n",*ptr);
//     *ptr += 5;
//      printf(" x=%d\n",x);
//     printf("*ptr = %d\n",*ptr);
//     (*ptr)++;
//     printf(" x=%d\n",x);
//     printf("*ptr = %d\n",*ptr);
//     return 0;
// }