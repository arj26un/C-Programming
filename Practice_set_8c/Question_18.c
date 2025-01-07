// Create a three diemnsional arrray and print the address of its elements

#include <stdio.h>
int main()
{
    int rows, column, plane;
    printf("Enter the no. of rows:");
    scanf("%d", &rows);
    printf("Enter the no. of colums:");
    scanf("%d", &column);
    printf("Enter the no. of thrid:");
    scanf("%d", &plane);

    int matrix_1[rows][column][plane];

    printf("Enter the elements of Matrix :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            for (int k = 0; k < plane; k++)
            {
                scanf("%d", &matrix_1[i][j][k]);
            }
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            for (int k = 0; k < plane; k++)
            {
                printf("%u  ", &matrix_1[i][j][k]);
            }
        }
        printf("\n");
    }
    return 0;
}