// Given an array containg elements from 1 to 100 except one element
// in this range is missing. Find the missing elements.
#include <stdio.h>

int main()
{
    int size, sum_1 =0,sum_2 =0;
    printf("Enetr the number:");
    scanf("%d", &size);
    int array[size];
    printf("Enter the elements:\n");
    for (int i = 0; i < size-1; i++)
    {
         scanf("%d", &array[i]);
    }
    printf("\n");
    printf("The elements are:\n");
    for (int i = 0; i < size-1; i++)
    {
        printf("%d", array[i]);
        printf("\n");
        sum_1 += array[i];
    }
    printf("\n");
   for (int i = 0; i <= size; i++)
    {
        
        sum_2 += i;
    }
    printf("The missing element is %d ", sum_2-sum_1);
    printf("\n");
    return 0;
}
