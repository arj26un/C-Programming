//Find the maximum value out of the elements in thr array
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the arrray:");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
   int maximum = array[0];
   int index;
    for (int i = 0; i < size; i++)
    {
       if(maximum<array[i]){
               maximum= array[i];
               index = i;
                   }
       
    }
    printf("The maximum from %d elemts is %d and at %d index ",size,maximum,index);
    return 0;}