/* Given an array of digits, the task is to 
find the minimum possible sum of two 
number formed from digits of the array. 
Please note that all digits of the given array must be used 
to form the two number
*/
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Elements of array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    //sorting the array
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if(array[j]>array[j+1]){
                int temp = array[j];
                array[j]=array[j+1];
                array[j+1]= temp;
            }
        }
        
    }
    printf("Sorted array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    int sum1 =0;
    for (int i = 0; i < size; i++)
    {
     sum1= array[i]+sum1*10;
    }
    printf("\n 1st number = %d",sum1);
    for (int i = 0; i < size; i++)
    {
        if (array[size-i-1]!= array[size-i-2])
        {
            int temp = array[size-i-1];
            array[size-i-1]= array[size-i-2];
            array[size-i-2]= temp;
            break;
        }
        else if ((array[size -i-1]==array[size-i-2])&&(i<=size-3)){
            int temp = array[size-i-2];
            array[size-i-2]= array[size-i-3];
            array[size-i-3]= temp;
        }
        
    }
    int sum2=0;
    for (int i = 0; i < size; i++)
    {
        sum2 = array[i]+sum2*10;
    }
    printf("\n 2nd number =%d",sum2);
    int M_sum = sum1+sum2;
    printf("\nSum of 2 smallest number formed from array = %d",M_sum);
    return 0;
}