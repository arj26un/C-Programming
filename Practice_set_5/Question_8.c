//WAP to print a squre using alphabets

# include <stdio.h>
int main(){
   int rows_columns;
   printf("Enter the rows :");
   scanf("%d",&rows_columns);
   for (int i = 1; i <= rows_columns; i++)
   {   int a= 65;
     for (int j = 1; j<=rows_columns; j++)
     {
        printf("%c",a);
        a++;
     }
     printf("\n");
   }
   
 return 0 ;
}