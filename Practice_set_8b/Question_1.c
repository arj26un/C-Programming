//Create an array of 10 numbers.Verify using pointer arithmetic that
// (ptr +2)points to the third elements where ptr is a pointer pointing
// to the first element of the array
#include<stdio.h>
int main(){
    int array[10]={3,4,5,45,56,34,75,34,78,90};
     int* ptr = &array[0];
     

     printf("The address of third element is %u\n",&array[2]);
     
     printf("The address of third element is %u\n",(ptr +2));
     printf("The address of first element is %u\n",ptr);

}
