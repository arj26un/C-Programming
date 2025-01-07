//Find the second maximum value out of the elements in thr array
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
   int second_maximum = array[0];
   int index;
    for (int i = 0; i < size; i++)
    {
       if(maximum<array[i]){
               maximum= array[i];
               index = i;
                   }
       
    }
     for (int i = 0; i < size; i++)
    {
       if(maximum!=array[i]&& second_maximum<array[i]){
               second_maximum= array[i];
               index = i;
                   }
       
    }
    printf("The maximum from %d elemts is %d and at %d index ",size,second_maximum,index);
    return 0;}