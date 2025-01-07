// WAP to print solid rectangle
#include <stdio.h>
int main()
{
    int column, rows;
    printf("Enter the column:");
    scanf("%d", &column);
    printf("Enter the rows:");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}