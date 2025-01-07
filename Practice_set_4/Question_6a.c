//WAp to implement program 5 using for loop
#include<stdio.h>
int main(){
    int sum =0;
    for ( int i=1; i<=10; i++)
    {
        sum = sum + i;
    }
    
   printf("the sum of first 10 numbers = %d ",sum);
    return 0;
    
}