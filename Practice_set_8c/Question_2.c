// WAP to store 10 at every index of a 2D matrix with 5 rows and 5 columns

#include <stdio.h>
int main()
{
    int array[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array[i][j] = 10;

            printf("%d  ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}