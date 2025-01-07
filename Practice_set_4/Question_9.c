// WAP reapeat question 8 using while loop
#include <stdio.h>
 int main(){
    int number, factorial = 1,  i = 1;
    printf("enter the number:");
    scanf("%d",&number);
    printf("The factorial of %d is \n",number);
    printf("%d ",number);

while (i<=number)

  { 
        if(i<number){
            printf("X %d ",number- i);
        }
         
      factorial= factorial*i;
    
      i++;
    }
      


    // for (int i = 1; i<=number; i++)

    // { 
    //     if(i<number){
    //         printf("X %d ",number- i);
    //     }
         
    //   factorial= factorial*i;
    
      
    // }
     printf("= %d",factorial);
   return 0;

  }