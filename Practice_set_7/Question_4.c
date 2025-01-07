//Write a function and pass the value by by reference
#include<stdio.h>
int function(int* a,int* b );
int main(){
    int i,j;
    function(&i,&j);
    printf("The value of i = %d\n",i);
    printf("The value of j = %d\n",j);
    return 0;
}
int function(int* a, int* b ){
    printf(" Enter the value of 1st number:");
    scanf("%d",&*a);
    printf(" Enter the value of 2nd number:");
    scanf("%d",&*b);
    return 0 ;
}