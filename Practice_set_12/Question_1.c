// given an array of integer with 1 to n elements and the size of the array if 
//n+1 one element is occuring more than once i.e duplicate number is presented. 
//Find the duplicate element.
// APPLYING METHOD 3
#include<stdio.h>
 
 int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int array[n];
    printf("Enter the array:");
    for(int i =0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("\n");
    printf("The array is :\n");
    for(int i =0;i<n;i++){
        printf("%d ",array[i]);
    }
    // sum the all elements of the array
    int sum =0;
    for(int i = 0;i<n;i++){
        sum = sum +array[i];

    }
    // the sum of first n number
    int sum_n =0;
    for(int i = 0;i<n;i++){
        sum_n = sum_n +i;

    }
   printf("\nThe duplicate element is %d",sum-sum_n);
 
  return 0;
 }
