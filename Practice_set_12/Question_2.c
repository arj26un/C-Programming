//Given an array of integer numbers that is already sorted in non-descending order, find
// two numbers such that they add upto a specific target number

#include<stdio.h>
int main(){
   int n,target;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the target number:");
    scanf("%d",&target);
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
   int i=0 ,j=n-1;
   while(i<j){
    if((array[i]+array[j])==target){
        printf("\n%d(%d) + %d(%d) = %d",array[i],i,array[j],j, target);
       i++;
       j--;
    }
    else if((array[i]+array[j])>target){
        j--;
    }
    else{
        i++;
    }
    
   }

return 0;
}