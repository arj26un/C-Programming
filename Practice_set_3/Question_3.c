/* Calculate income tax paud by an employee to the government as per the slabs mentioned below:-
                Incpme slabs              tax
                2.5L-5.0L                 5%
                5.0L-10.0L                20%
                Aboe 10.0L                30%
    NOTE:- There is no tax below 2.5L. Take income amount as an input from the user.            
*/ 
# include <stdio.h>
int main(){
     int income;
     float tax;
     printf("Enter your income =");
     scanf("%d",&income);
     if (income<=250000)
     {
         printf("No tax need to pay \n");
     }
     else if (250000 <income<=500000)
     {    
         tax = (5.0/100.0)*(income - 250000);
        printf("You need to pay tax is %f \n ", tax);

     }
     else if (500000 <income<=1000000 ){
        tax = (5.0/100.0)*(500000 - 250000) + (20.0/100.0)*(income - 500000);
        printf("You need to pay tax is %f \n", tax);

     }
     else{
          tax = (5.0/100.0)*(500000 - 250000) + (20.0/100.0)*(1000000 - 500000) + (30.0/100.0)*(income-1000000);
          printf("you need to pay tax is %f \n",tax);

     }
 return 0 ;
}