// Given a matrix 'a' of dimension nxm and 2 cordinates (l1,r1) and (l2,r2)
// return the sum of the rectangle from (l1,r1) to (l2,r2)

#include <stdio.h>
int main()
{
    int rows, column, l1, r1, l2, r2;
    printf("Enter the no. of rows:");
    scanf("%d", &rows);
    printf("Enter the no. of colums:");
    scanf("%d", &column);
    printf("Enter the number of row from which the sum is needed:");
    scanf("%d", &l1);
    printf("Enter the number of column from which the sum is needed:");
    scanf("%d", &r1);
    printf("Enter the number of row in which the sum is end:");
    scanf("%d", &l2);
    printf("Enter the number of column from which the sum is end:");
    scanf("%d", &r2);

    int matrix_1[rows][column];

    printf("Enter the elements of Matrix :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &matrix_1[i][j]);
        }
    }

    int sum = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
           
            printf("%d  ", matrix_1[i][j]);
        }
        printf("\n");
    }
    for (int i = l1 - 1; i <= l2-1; i++)
    {
        for (int j = r1 - 1; j <= r2-1; j++)
        {
            sum += matrix_1[i][j];
        }
    }

    printf("The sum of the elements is %d ", sum);
    return 0;
}