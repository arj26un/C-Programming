// Given an array and a number 'x'.
//Find out if x lies in the array or not, if yes then  print the index

#include <stdio.h>

int main()
{
    int size,number;
    printf("Enetr the number:");
    scanf("%d", &size);
    printf("Enetr the number needs to find:");
    scanf("%d", &number);
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
      for (int i = 0; i < size; i++)
    {
        if (array[i]==number)
        {
            printf("%d at %d index", array[i],i);
       
        }
        
    }

   return 0;
}

