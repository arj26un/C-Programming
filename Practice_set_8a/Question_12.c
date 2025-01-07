// WAP to find the total number of triple in the array
// whose sum is equal to the given number and print pairs
#include <stdio.h>
int main()
{
    int size, number;
    printf("Enter the size of the arrray:");
    scanf("%d", &size);
    printf("Enter the number which is the sum of pairs of two elements:");
    scanf("%d", &number);
    int array[size];
    int count = 0;
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int k = i + 1; k < size; k++)
        {
            for (int j = k + 1; j < size; j++)
            {
                if (array[i] + array[k]+array[j] == number)
                {
                    printf(" The elements at %d index is (%d,%d,%d) \n", i, array[i], array[k], array[j]);
                    count++;
                }
            }
        }
    }
    printf("The count of all elements in the array is %d ", count);
    return 0;
}