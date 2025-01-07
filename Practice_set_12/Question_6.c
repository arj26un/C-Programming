// Given an integer array,move all 0's to the end ofg it while maintaing 
//the relative order of the non-zero elements
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
    printf("\n The array after all zero's at end\n");
    int ans[size];
    int indx = 0;

    for(int i=0;i<size;i++){
        int n;
           if(array[i]!=0){
            ans[indx]=array[i];
            indx++;
            n= indx;
           }
           while(indx!=size){
            ans[indx]=0;
             //printf("%d\n ",ans[indx]);
            indx++;
             
           }
           indx =n;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ",ans[i]);
    }
    return 0;
}