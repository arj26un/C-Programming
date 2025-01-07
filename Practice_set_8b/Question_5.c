// Rotate the given array 'a' by 'K' steps, where K is non negative
// WAP contaning function which counts the number of positive integer
#include <stdio.h>
int reverse(int array[],int a, int n);
int main()
{
    int size,k;
    printf("Enter the number:");
    scanf("%d", &size);
    printf("Enter the rotation number:");
    scanf("%d", &k);
    int array[size];
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n");
    
    printf("The elements are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        printf("\n");
    }
    k=k%size;
    reverse(array,0,size-1);
    reverse(array,0,k-1);
    reverse(array,k,size-1);
printf("The elements after %d rotation are:\n",k);
    for (int i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        printf("\n");
    }
    
}

int reverse(int array[],int a, int n)
{
    for (int i = a; i < n/2; i++)
    {
        int temp = array[i];
        array[i] = array[n-1-i];
        array[n-1-i] = temp;
    }
    
}