// WAP to sorting the array using SELECTION SHORT
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int array[size];
    printf("Enter the array:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("\n Printing the array:\n");
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    // sorting the array
   for(int i=0;i<size-1;i++){
    int min = __INT_MAX__;
    int min_idx= -1;
    for(int j=i;j<=size-1;j++){
        if (min>array[j]){
            min =array[j];
            min_idx = j;
        }
        }
        
            int temp = array[min_idx];
            array[min_idx]= array[i];
            array[i]= temp;
        
    
   }
    printf("\n");
    
   
   printf("The elements of sorted array:\n");
   for(int i=0;i<size;i++){
    printf("%d ",array[i]);
   }
   return 0;
}
