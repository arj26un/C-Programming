/*WAP to print 
     *
     *
   *****
     *
     *

*/
# include <stdio.h>
int main(){
   int rows_columns,number;
   printf("Enter the rows :");
   scanf("%d",&rows_columns);
   number=(rows_columns/2)+1;
   for (int i = 1; i <= rows_columns; i++)
   {   
     for (int j = 1; j<=rows_columns; j++)
     {
        if(i==number||j==number){
            printf("*");
        }
        else{
            printf(" ");
        }
       
     }
     printf("\n");
   }
   
 return 0 ;
}