// WAP to make function to calculate the sum,product & averageof 2 numbers
#include<stdio.h>
float average(int a, int b);
int sum(int a, int b);
int product(int a, int b);
int main(){
    int number_1,number_2;
    printf("Enter 1st number:");
    scanf("%d",&number_1);
    printf("Enter 2nd number:");
    scanf("%d",&number_2);
    float result_1= average(number_1,number_2);
    int result_2=  sum(number_1,number_2);
    int result_3= product(number_1,number_2);
    printf("The average of %d and %d is %f \n",number_1,number_2,result_1);
    printf("The average of %d and %d is %d \n",number_1,number_2,result_2);
    printf("The average of %d and %d is %d \n",number_1,number_2,result_3);
}
float average(int a, int b){
    return (a+b)/2;
}
int sum(int a, int b){
    return a+b;
}
int product(int a, int b){
    return a*b;
}