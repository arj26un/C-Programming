/* WAP to print
1 2 3 4 5 6 7 8 9 10 11 
1 2 3 4 5   7 8 9 10 11 
1 2 3 4       8 9 10 11 
1 2 3           9 10 11 
1 2               10 11 
1                    11 
      
*/
#include<stdio.h>
int main(){
    int number,_2n,no_of_spaces=1;
    printf("Enter the number:");
    scanf("%d",&number);
    _2n = 2*number+1;
    int no_of_stars= number;
    for(int i=1;i<=_2n;i++){
        printf("%d ",i);
    }
    printf("\n");
    for(int i=1;i<=number;i++){
        int a=1;
        for(int j=1;j<=no_of_stars;j++){
            printf("%d ",a);
            a++;
        }
        for(int k=1;k<=no_of_spaces;k++){
            printf("  ");
            a++;
        }
       for(int j=1;j<=no_of_stars;j++){
        printf("%d ",a);
        a++;
       }
       printf("\n");
       no_of_stars--;
       no_of_spaces+=2;
    }
    return 0;
    }