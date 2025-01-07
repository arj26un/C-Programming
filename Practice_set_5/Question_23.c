/* WAP to print
       *
     * * *
   * * * * * 
     * * *
       *   
*/
#include<stdio.h>
int main(){
    int number, middle_term,no_of_stars=1;
    printf("Enter the number:");
    scanf("%d",&number);
    if(number%2==0){
        printf("Please enter the odd number!");
        return 0;
    }
    middle_term = (number+1)/2;
    int no_of_spaces = middle_term-1;
    for (int i = 1; i <= number; i++)
    {
        for(int j=1;j<=no_of_spaces;j++)
        {
            printf("  ");
        }
        for(int j=1;j<=no_of_stars;j++){
            printf("* ");
        }
        printf("\n");
        if(i<middle_term){
            no_of_spaces--;
            no_of_stars +=2;
        }
        else{
            no_of_spaces ++;
            no_of_stars -=2;
        }
    }
  return 0;
}