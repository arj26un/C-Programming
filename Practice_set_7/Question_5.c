/*
WAP using a function which calculate the sum and average of two numbers.
Use pointers and print the value of sum and average in main()  
 */
#include<stdio.h>
int sum(int a, int b);
int  average(int a, int b);
int main(){
    int number_1,number_2;
    printf("Enter 1st number:");
    scanf("%d",&number_1);
    printf("Enter 2nd number:");
    scanf("%d",&number_2);
    int address_of_sum = sum(number_1,number_2);
    int address_of_average = average(number_1,number_2);
    printf("The address of sum = %d\n",address_of_sum);   
    printf("The address of average = %d\n",address_of_average);

return 0;
}
int sum(int a, int b){
    int addition = a+b;
    int* ptr = &addition;
    printf("The sum of %d and %d is %d\n",a,b,addition);
    return ptr;
}
int average(int a, int b){
    float avg = (a+b)/2.0;
    float* ptr = &avg;
    printf("The sum of %d and %d is %f\n",a,b,avg);
    return ptr;
}