// Swaping two number using call by reference
#include <stdio.h>
int swaping(int* a, int* b);
int main()
{
    int a, b;
    printf("Enter the 1st number:");
    scanf("%d", &a);
    printf("Enter the 2nd number:");
    scanf("%d", &b);
   printf("The value before swaping : \n a= %d \n b= %d\n",a,b);
     swaping(&a,&b);
      printf("The value after swaping : \n a= %d \n b= %d\n",a,b);
   return 0;
}    
int swaping(int* a, int* b)
{
    int temperory = *a;
    *a = *b;
    *b = temperory;
    return 0;
}
