// Sum of all elementys in the given array.
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the arrray:");
    scanf("%d",&size);
    int array[size];
    int sum =0;
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf(" The element at %d index is %d \n",i,array[i]);
        sum = sum + array[i];
    }
    printf("The sum of all elements in the array is %d ",sum);
    return 0;
}