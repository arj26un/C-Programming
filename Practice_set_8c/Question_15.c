// Wave print of matrix from top to bottom

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
    printf("\n \n  The elements of in wave order :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (j % 2 == 0)
            {
                printf("%d  ", matrix_1[i][j]);
            }

            else
            {

                printf("%d  ", matrix_1[rows - 1 - i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}