//WAP to print swap number
#include<stdio.h>
int main(){
    int number_1,number_2;
    printf("Enter the 1st number:");
    scanf("%d",&number_1);
    printf("Enter the 2nd number:");
    scanf("%d",&number_2);
    int temporary_number;
    printf(" 1st number = %d \n 2nd number = %d\n",number_1,number_2);
    temporary_number = number_1;
    number_1= number_2;
    number_2 = temporary_number;
    printf("After Swaping the numbers:\n");
    printf("1st number = %d \n 2nd number = %d",number_1,number_2);
    return 0;

}