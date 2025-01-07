// make a calculater using switch
#include<stdio.h>
int main(){
    int number_1,number_2;
    int  addition,subtraction,multiplication,division,reminder;
    printf("Enetr the 1st number:");
    scanf("%d",&number_1);
    char symbol;
    printf("Enetr the symbol:");
    scanf(" %c",&symbol);
     printf("Enetr the 2nd number:");
    scanf("%d",&number_2);
    switch (symbol)
    {
    case '+':
                addition =number_1+number_2;
               printf("%d + %d= %d",number_1,number_2,addition);
        break;
    case '-':
                subtraction =number_1-number_2;
               printf("%d - %d= %d",number_1,number_2,subtraction);
        break;
    case '*':
                multiplication =number_1*number_2;
               printf("%d * %d= %d",number_1,number_2,multiplication);
        break;
    case '/':
                division =number_1/number_2;
               printf("%d/%d= %d",number_1,number_2,division);
        break;
    case 'R':
                reminder =number_1%number_2;
               printf("%d/%d= reminder(%d)",number_1,number_2,reminder);
        break;
    
    default:
             printf("Not a valid symbol");
    }
    return 0;
}