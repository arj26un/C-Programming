// WAP to add matrix
#include<stdio.h>
int main(){
    int rows, column;
    printf("Enter the no. of rows:");
    scanf("%d",&rows);
    printf("Enter the no. of colums:");
    scanf("%d",&column);

    int matrix_1[rows][column],matrix_2[rows][column];                                                                                                                                                                                                           
    
    printf("Enter the Matrix 1:\n");
    for (int i = 0; i <rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d",&matrix_1[i][j]);
        }
             
    }
    printf("Enter the Matrix 2:\n");
    for (int i = 0; i <rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d",&matrix_2[i][j]);
        }
             
    }
    
     for (int i = 0; i <rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
       
        printf("%d  ",matrix_1[i][j]+matrix_2[i][j]);
        }
        printf("\n");     
    }
    return 0;
}