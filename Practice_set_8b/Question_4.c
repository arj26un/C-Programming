// WAP contaning function which counts the number of positive integer
#include <stdio.h>
int greater_postive_NUMBER(int array[], int n);
int main()
{
    int size;
    printf("Enetr the number:");
    scanf("%d", &size);
    int array[size];
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n");
    printf("The elements are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        printf("\n");
    }
    printf("\n");

    printf("The grestest intger then 0 is %d", greater_postive_NUMBER(array, size));
}

int greater_postive_NUMBER(int array[], int n)
{
    int count = 0;
    printf("The elements greater then zero:\n");
    for (int i = 0; i < n; i++)
    {
        if (array[i] > 0)
        {
            printf("The index is %d and the element is %d \n", i, array[i]);
            count++;
        }
    }
    return count;
}