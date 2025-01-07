/* WAP to print
   1
   3 5
   7 9 11
*/
#include<stdio.h>
int main(){
    int number,a=1;
    printf("Enter the number:");
    scanf("%d",&number);
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <=i; j++)
        {  
            printf("%d ",a);
            a=a+2;
        }
        printf("\n");
    }
    return 0;
}