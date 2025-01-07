// WAP to add all th elements of a matrix n*m;

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
  
    int sum = 0;
    

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            sum +=  matrix_1[i][j];    
            printf("%d  ", matrix_1[i][j] );
        }
        printf("\n");
    }
    printf("The sum of the elements is %d ",sum);
    return 0;
}