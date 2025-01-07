/* WAP to print
   1
   13
   135
*/ 

# include <stdio.h>
int main(){
   int number;
   printf("Enter the number:");
   scanf("%d",&number);

 for (int i = 1; i <= number; i++)
 {
    int a =1;
    for (int j = 1; j <= i; j++)
    {
        printf("%d",a);
        a= a+2;
    }
      
    printf("\n");
 }
  return 0 ;
}