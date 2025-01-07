// WAP to convert celsius in ferhenit
# include <stdio.h>
int main(){
   int celsius;
   float fahrebheit;
   printf("temperature in celsius = ");
   scanf("%d",&celsius);
   fahrebheit = ((9.0/5.0)*celsius)+32;
   printf(" the temperature from celsius (i.e, %d ) to fahrenheit is %f ",celsius, fahrebheit);

 return 0 ;
}