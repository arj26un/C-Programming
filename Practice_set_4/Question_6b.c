//WAp to implement program 5 using do-while loop
#include<stdio.h>
int main(){
    int sum =0, i= 1;
    do{
        sum = sum +i;
        i++;
    }while(i<=10);
    
   printf("the sum of first 10 numbers = %d ",sum);
    return 0;
    
}