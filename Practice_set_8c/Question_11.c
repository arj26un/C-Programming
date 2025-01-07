// WAp to change the bgiven n*n matrix to its transpose without using extra matrix
// WAP to print the transpose of the matrix
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the no. of rows/columns:");
    scanf("%d", &rows);

    int matrix_1[rows][rows];

    printf("Enter the elements of Matrix :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            scanf("%d", &matrix_1[i][j]);
        }
    }
    printf(" The elements of Matrix :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {

            printf("%d  ", matrix_1[i][j]);
        }
        printf("\n");
    }
    printf(" The elements of Transpose Matrix :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (j < i)
            {
                int temp = matrix_1[i][j];
                matrix_1[i][j] = matrix_1[j][i];
                matrix_1[j][i] = temp;
            }
        }  
     
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {

            printf("%d  ", matrix_1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
