//WAP to make AP with sum of ap
# include <stdio.h>
int main(){
   int an,a,d;
   printf("Enter value of a:");
   scanf("%d",&a);
   printf("Enter value of d:");
   scanf("%d",&d);
   printf("Enter number of terms:");
   scanf("%d",&an);
   printf("The AP is =");
   float sum= (an/2.0)*((2.0*a )+ (an-1)*d);
   for (int i = 1; i <= an; i++)
   {
    printf("%d\t",a);
      a=a+d;
       }
    printf("The sum of %d terms = %f",an,sum);
   
 return 0 ;
}