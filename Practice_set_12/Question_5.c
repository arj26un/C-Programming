// WAP to sorting the array using INSERTION SORT
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
   for(int i=0;i<=size-1;i++){
   int j=i;
   while (j>=0&& array[j]<array[j-1])
   {
    int temp = array[j];
            array[j]= array[j-1];
            array[j-1]= temp;
        j--;
   }
   
        
        
            
    
   }
    printf("\n");
    
   
   printf("The elements of sorted array:\n");
   for(int i=0;i<size;i++){
    printf("%d ",array[i]);
   }
   return 0;
}
