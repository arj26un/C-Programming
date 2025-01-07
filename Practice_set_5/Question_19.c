/* WAP to print
        * * * *
      * * * *
    * * * *
  * * * *  
*/
#include<stdio.h>
int main(){
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    int n = 2*number-1;
    for (int i = 1; i <= number; i++)
    {  
        for (int j = 1; j<=n; j++)
        {
            if((i+j>=number+1)&&(i+j<=n+1)){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
        
    }
    return 0;
}