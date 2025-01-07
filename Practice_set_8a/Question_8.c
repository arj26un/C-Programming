//Find the minimum value out of the elements in thr array
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
   int minimum= array[0];
   int index;
    for (int i = 0; i < size; i++)
    {
       if(minimum>array[i]){
              minimum= array[i];
               index = i;
                   }
       
    }
    printf("The minimum from %d elemts is %d and at %d index ",size,minimum,index);
    return 0;}