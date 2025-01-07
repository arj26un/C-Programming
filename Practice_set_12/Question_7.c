// Given an integer array and an integer K where k<= size of array,
// we need to retun th Kth smallest element of the array

#include<stdio.h>
int main(){
    int size,k;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the  kth smallest number's index of array you want :");
    scanf("%d",&k);
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
    for(int j=0;j<size-1-i;j++){
        if(array[j]>array[j+1]){
            int temp = array[j];
            array[j]= array[j+1];
            array[j+1]= temp;
        }
    }
   }
   printf("sorted array:\n");
   for(int i=0;i<size;i++){
    printf("%d ",array[i]);
   }
   int number = array[k];
   printf("\nThe %d element of the array is: %d",k,number);
        
   return 0;

}
