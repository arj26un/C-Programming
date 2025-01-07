/* WAP to print

* * * *
  * * *
    * *
      *  

*/
# include <stdio.h>
int main(){
  int number;
   printf("Enter the number:");
    scanf("%d",&number);
    for (int i = 1; i <=number; i++)
    {
       for (int j=1; j <=number; j++)
       {
         if(i<=j){printf("* ");}
         else{
            printf("  ");
         }
       }
       printf("\n");
    }
    

 return 0 ;
}