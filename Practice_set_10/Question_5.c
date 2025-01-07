//WAP with a structure representing a complex number
#include<stdio.h>
typedef struct complex_number{
    int real;
    int imaginary;
}complex_number;
int main(){
      complex_number CP;
     printf("Enter the 1st element of Complex number:");
     scanf("%d",&CP.real);
     printf("Enter the 2nd element of Complex number:");
     scanf("%d",&CP.imaginary);

printf("The complex number is %d+%di ",CP.real,CP.imaginary);
return 0;
}