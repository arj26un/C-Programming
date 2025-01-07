/*
WAP having a variable 'i', print the address of 'i'. 
Pass this variable to a function and print its address.
Are these address same? why ?
*/
#include<stdio.h>
void function(int* i);
int main(){
    int i=1;
    int* ptr =&i;
    printf("The address of variable 'i' is %p \n",ptr);
     printf("The value  of variable 'i' is %d \n",i);
    function(ptr);
    return 0;
}
void function(int* i){
     printf("The address of variable 'i' is %p \n",i);
     printf("The value  of variable 'i' is %d \n",*i);
     return;
}