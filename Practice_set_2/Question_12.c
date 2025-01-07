//WAP to print the average of the 3 numbers
# include <stdio.h>
int main(){
  int number_1,number_2,number_3;
   float average;
   printf("Enter the  1st number ");
   scanf("%d",& number_1);
   printf("Enter the  2nd number ");
   scanf("%d",& number_2); 
   printf("Enter the  3rd number ");
   scanf("%d",& number_3); 
   average = (number_1+number_2+number_3)/3;
   printf("\n The average of 3 numbers is %f", average);
 return 0 ;
}