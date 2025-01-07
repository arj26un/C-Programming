// WAP to calculate simple interest
# include <stdio.h>

int main(){
    int principal,rate, time;
    float simple_interest;
    printf("the principal is =");
    scanf("%d",& principal);
printf("the rate is =");
scanf("%d",& rate);
    printf("the time is =");
    scanf("%d",& time);
    simple_interest = (principal*rate*time)*100;
    printf(" %f",simple_interest);
 return 0 ;
}