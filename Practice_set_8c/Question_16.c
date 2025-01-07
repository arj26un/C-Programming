// Given an nxm matrix 'a', print all elements in spiral order
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
    int minr =0;
    int maxr = rows -1;
    int minc = 0;
    int maxc = column -1;
    int total_elements = rows * column;
    int count =0;
   while (count <total_elements)
   {
    for(int j = minc; j<=maxc&&count<total_elements;j++){
        printf("%d ",matrix_1[minr][j]);
        count ++;
    }
    minr++;
    for(int i = minr; i<=maxr&&count<total_elements;i++){
        printf("%d ",matrix_1[i][maxc]);
        count ++;
    }
   maxc--;
    for(int j = maxc; j>=minc&&count<total_elements;j--){
        printf("%d ",matrix_1[maxr][j]);
        count ++;
    }
    maxr-- ;
    for(int i = maxr; i>=minr&&count<total_elements;i--){
        printf("%d ",matrix_1[i][minc]);
        count ++;
    }
    minc++;
    
   }
   
    return 0;
}