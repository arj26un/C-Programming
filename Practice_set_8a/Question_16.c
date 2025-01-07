// WAP to check whether a array is palindrome or not.

#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of the arrray:");
    scanf("%d", &size);
    int array[size], array_1[size];

    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf(" The element at %d index is %d \n", i, array[i]);
        array_1[i] = array[size - 1 - i];
    }
    printf("\n");
    int check = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == array_1[i])
        {
            check++;
        }
    }
    if(check ==size){
        printf("The arrray is PALINDROME");
    }
            else{
                 printf("The arrray is NOT PALINDROME");
            }
    return 0;
}