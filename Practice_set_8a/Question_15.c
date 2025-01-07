// WAP to reverse the elements without using third variable
#include <stdio.h>
int reverse(int array[], int size);
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
    printf("\n");
    for (int i = 0; i < size; i++)
    {

        printf(" The element at %d index is %d \n", i, array[i]);
    }
    reverse(array, size);

    printf("\n\n");
    for (int i = 0; i < size; i++)
    {

        printf(" The element at %d index is %d \n", i, array[i]);
    }
    return 0;
}
int reverse(int array[], int size){
    for (int i = 0;i<size/2; i++)
    {
        int temp = array[i];
        array[i] = array [size-1-i];
        array[size-1-i] = temp;
    }
    return 0;
}