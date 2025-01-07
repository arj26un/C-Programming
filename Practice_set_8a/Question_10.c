// WAP to count the number of elements greater the a given number
#include<stdio.h>
int main(){
    int size,number;
    printf("Enter the size of the arrray:");
    scanf("%d",&size);
    printf("Enter the number from which u want greater number:");
    scanf("%d",&number);
    int array[size];
    int count =0;
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if(array[i]>number){
            printf(" The element at %d index is %d \n",i,array[i]);
           count++;
        }
    }
    printf("The count of all elements in the array is %d ",count);
    return 0;
}