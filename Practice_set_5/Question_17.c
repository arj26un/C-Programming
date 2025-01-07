/*WAP to print binary in right triangle
   1
   0 1
   1 0 1
   0 1 0  1

*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
           if((i+j)%2==0){
            printf("1 ");

           }
           else{
            printf("0 ");
           }
        }
        printf("\n");
    }
    return 0;
}