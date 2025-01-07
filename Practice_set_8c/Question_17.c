// WAP to creatre vthe multpication table of numbers in single code;
//  WAP to add all th elements of a matrix n*m;

#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the no. of rows:");
    scanf("%d", &rows);
   

    int matrix_1[rows][10], multiplcation[rows];

    printf("Enter the numbers :\n");
    for (int i = 0; i < rows; i++)
    {
       scanf("%d", &multiplcation[i]);
    }
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 10; j++)
        {
           matrix_1[i][j]= multiplcation[i]*(j+1);
            
        }
        printf("\n");
    }


    for (int i = 0; i < rows; i++)
    {  printf("Table of %d\n",multiplcation[i]);
        for (int j = 0; j < 10; j++)
        {

            printf("%d X %d = %d \n ",multiplcation[i],j+1, matrix_1[i][j]);

        }
        printf("\n");
    }

    return 0;
}