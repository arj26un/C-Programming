/* WAP to print
* * * * * * * * * * * * * * * 
* * * * * * *   * * * * * * * 
* * * * * *       * * * * * * 
* * * * *           * * * * * 
* * * *               * * * * 
* * *                   * * * 
* *                       * * 
*                           *
      
*/
#include<stdio.h>
int main(){
    int number,_2n,no_of_spaces=1;
    printf("Enter the number:");
    scanf("%d",&number);
    _2n = 2*number+1;
    int no_of_stars = number;
    for(int i=1;i<=_2n;i++){
       printf("* ");
    }
    printf("\n");
    for(int i=1;i<=number;i++){
        for(int j=1;j<=no_of_stars;j++){
            printf("* ");
        }
        for(int k=1;k<=no_of_spaces;k++){
            printf("  ");
        }
        for(int l=1;l<=no_of_stars;l++){
            printf("* ");
        }
        printf("\n");
        no_of_stars--;
        no_of_spaces+=2;
    }
    return 0;
}