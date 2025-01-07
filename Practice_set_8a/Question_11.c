// WAP to find the total number of pairs in the array 
//whose sum is equal to the given number and print pairs 
#include<stdio.h>
int main(){
    int size,number;
    printf("Enter the size of the arrray:");
    scanf("%d",&size);
    printf("Enter the number which is the sum of pairs of two elements:");
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
        for (int j = i+1; j<size; j++)
        {
            if(array[i]+array[j]==number){
            printf(" The elements at %d index is (%d,%d) \n",i,array[i],array[j]);
           count++;
        }
        
        }
    }
    printf("The count of all elements in the array is %d ",count);
    return 0;
}