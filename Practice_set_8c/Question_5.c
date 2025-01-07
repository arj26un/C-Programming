// WAP to find maximum element and minimum elemenst and also print index number

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

    int maximum = matrix_1[0][0];
    int minimum = matrix_1[0][0];
    int  index_1, index_2, index_3, index_4;
           
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
           if(maximum < matrix_1[i][j]){
             maximum = matrix_1[i][j];
             index_1 = i;
             index_2 =j;
           }
           if(minimum > matrix_1[i][j]){
            minimum = matrix_1[i][j];
            index_3 = i;
             index_4 =j;
             
           }
            printf("%d  ", matrix_1[i][j]);
        }
        printf("\n");
    }
    printf("The maximum from  the elements is %d at index (%d,%d)\n ", maximum,index_1,index_2);
    printf("The minimum from  the elements is %d at index (%d,%d)\n ", minimum,index_3,index_4);
    return 0;
}