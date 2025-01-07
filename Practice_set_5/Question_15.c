/* WAP to print

  1
  2 3
  4 5 6
  7 8 9 10
*/ 
#include<stdio.h>
int main(){
    int number,a=1;
    printf("Enter the number:");
    scanf("%d",&number);
    for (int i = 1; i <= number; i++)
    {
      for (int j = 1; j <=i; j++)
      {
        printf("%d ",a);
        a++;
      }
      printf("\n"); 
    }
 return 0;   
}