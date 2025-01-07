// WAP to find the Unique element from the array

#include <stdio.h>

int main()
{
    int size;
    printf("Enetr the size:");
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
        int check = 0;
        for (int j = 0; j < size; j++)
        {
            if (i!=j&&array[i] == array[j])
            {

                check++;
                break;
            }
        }
        if(check == 0){
            printf("The element at %d is Unique\n",array[i]);
            //break;
        }
    }


return 0;
}
