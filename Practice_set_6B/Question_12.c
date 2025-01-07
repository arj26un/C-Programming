//WAP to print n to 1 using recurrsion
#include<stdio.h>
int numbers(number);
int main(){
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    numbers(number);
    return 0;
}
int numbers(number){
    if(number==0){
        return 0;
    }
    printf(" %d \n",number);
    return numbers(number-1);
}