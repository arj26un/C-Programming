// WAP to find the duplicates element from the array

#include <stdio.h>

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
    int check=0;
   
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
            {
                printf("The duplicate elemnt is %d at index %d and %d \n", array[i], i, j);
                     
                    check ++;         
            }
        }
    }
    if(check ==0){
        printf("No duplicate elements");
    }
    printf("\n");

    return 0;
}
