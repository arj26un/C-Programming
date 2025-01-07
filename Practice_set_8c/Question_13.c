// WAP to print the multiplication of 2 matrices
// WAP to add all th elements of a matrix n*m;

#include <stdio.h>
int main()
{
    int rows, column, row1, column1;
    printf("Enter the no. of rows:");
    scanf("%d", &rows);
    printf("Enter the no. of columns:");
    scanf("%d", &column);
    printf("Enter the no. of rows:");
    scanf("%d", &row1);
    printf("Enter the no. of columns:");
    scanf("%d", &column1);

    int matrix_1[rows][column], matrix_2[row1][column1], res[rows][column1];

    printf("Enter the elements of Matrix :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &matrix_1[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d  ", matrix_1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of Matrix 2 :\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            scanf("%d", &matrix_2[i][j]);
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%d  ", matrix_2[i][j]);
        }
        printf("\n");
    }
    printf("The multiplication of TWO matrix is:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < row1; k++)
            {
                res[i][j] += matrix_1[i][k] * matrix_2[k][j];
            }
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column1; j++)
        {

            printf("%d  ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}