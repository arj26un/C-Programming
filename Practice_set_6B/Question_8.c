//WAP to print square root of a number.
#include<stdio.h>
#include<math.h>
int main(){
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    int result = sqrt(number);
    printf("the square root of %d is %d",number,result);
}