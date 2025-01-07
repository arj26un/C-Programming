// WAP to calculate the sum of the numbers occuring in the multiplication table of 8
# include <stdio.h>
int main(){
 int sum =0,number=8;
 for(int i = 1; i<=10; i++ ){
    printf("%d x %d = %d \n",number,i, number*i);
    sum= sum + (number*i);
 }
 printf(" \n the sum of multiplication number of 8 is %d",sum);
 return 0 ;
}