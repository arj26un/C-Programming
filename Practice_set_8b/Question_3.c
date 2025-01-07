//WAP to crate an array of 10 integers 
//and store multiplication table of 'n' number
#include<stdio.h>
int main(){
    int number; 
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
   printf("Enter the number :");
   scanf("%d",&number);
   printf("The table of %d is: \n",number);
   for (int i = 0; i < 10; i++)
   {
     printf("%d X %d = %d \n",number,array[i],number*array[i]);
   }
   
}