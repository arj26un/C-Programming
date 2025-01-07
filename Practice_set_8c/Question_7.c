// WAP to print the row number having the maximum sum in a given matrix

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

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {

            printf("%d  ", matrix_1[i][j]);
        }
        printf("\n");
    }
    int maximum_row_sum = 0, print_sum, index;
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < column; j++)
        {
            sum += matrix_1[i][j];
            if (maximum_row_sum < sum)
            {
                maximum_row_sum = sum;
                index = i+1;
                print_sum = sum;
            }
        }
        printf("\n");
    }
     printf("The maximum sum of a row is %d\n row = %d \n The sum is = %d ",maximum_row_sum,index,print_sum);
    return 0;
}