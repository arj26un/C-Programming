// WAP to print the transpose of the matrix
#include <stdio.h>
int main()
{
    int rows, column;
    printf("Enter the no. of rows:");
    scanf("%d", &rows);
    printf("Enter the no. of colums:");
    scanf("%d", &column);

    int matrix_1[rows][column];

    printf("Enter the elements of Matrix :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &matrix_1[i][j]);
        }
    }
printf(" The elements of Matrix :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {

            printf("%d  ", matrix_1[i][j]);
        }
        printf("\n");
    }
  printf(" The elements of Transpose Matrix :\n");  
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j <  rows; j++)
        {
               
            printf("%d  ", matrix_1[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}