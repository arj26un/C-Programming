// Given an array and a number 'x'.
//If number is not present in array
#include <stdio.h>
#include<stdbool.h>

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
    bool flag = false;  
    int INDEX;                                                                                                                                                                                                     
      for (int i = 0; i < size; i++)
    {
        if (array[i]==number)
        {
          flag = true;
          INDEX= i;
          break;
        }
        
    }
if (flag==false)
        {
            printf("%d is not present in array",number);
        }
        else{
             printf("%d is present in array at %d index",number,INDEX);
    }

   return 0;
}

