// WAP to print first decreasing than increasing form of n numbers.
#include<stdio.h>
int numbers(int number);
int main(){
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    numbers(number);
    return 0;
}
int numbers(int number){
    if(number==0){
        return 0;
    }
    printf(" %d \n",number);
     numbers(number-1);
    printf(" %d \n",number);
    return 0;
} 