// WAp to print number square
# include <stdio.h>
int main(){
   int rows_columns;
   printf("Enter the rows :");
   scanf("%d",&rows_columns);
   for (int i = 1; i <= rows_columns; i++)
   {
     for (int j = 1; j<=rows_columns; j++)
     {
        printf("%d",j);
     }
     printf("\n");
   }
   
 return 0 ;
}