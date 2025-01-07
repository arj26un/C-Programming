// Given a matrix having 0-1 only find the row with the  maximum 0 or 1
// WAP to print the row number having the maximum sum in a given matrix

#include <stdio.h>
int main()
{
    int rows, column, binary_number;
    printf("Enter the no. of rows:");
    scanf("%d", &rows);
    printf("Enter the no. of colums:");
    scanf("%d", &column);
    printf("Enter the binary number:");
    scanf("%d", &binary_number);

    int matrix_1[rows][column];

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
    int maximum_row_number = 0, print_sum, index;
    for (int i = 0; i < rows; i++)
    {
        int count = 0;
        for (int j = 0; j < column; j++)
        {

            if (binary_number == matrix_1[i][j])
            {
                count++;
            }
            if (maximum_row_number<count)
            {     
                maximum_row_number = count;
                index = i+1;

            }
        }
        printf("\n");
    }
    printf("The maximum %d in a row is %d\n row = %d \n  ", binary_number,maximum_row_number,index);
    return 0;
}