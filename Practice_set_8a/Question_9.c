// Given an array of integers,change the value of all
// odd index element to its second multiple and
//  increment all even indexws value by 10

// Find the minimum value out of the elements in thr array
#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of the arrray:");
    scanf("%d", &size);
    int array[size];
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            array[i] += 10;
        }
        else{
            array[i] *=2;
        }
        printf(" The element at %d index is %d \n",i,array [i]);
    }
    return 0;
}
