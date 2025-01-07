// WAP to copy the content of one array into another in reverse order.

#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the arrray:");
    scanf("%d",&size);
    int array[size],array_1[size];
  
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf(" The element at %d index is %d \n",i,array[i]);
        array_1[i]=array[size-1-i];
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {    
        array[i]=array_1[i];
        printf(" The element at %d index is %d \n",i,array[i]);
        
    }
    return 0;
}