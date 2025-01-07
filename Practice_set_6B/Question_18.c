//WAP to print power function(logorthmic)
// a^b = a^(b/2)* a^(b/2);[if b is even]
// a^b = a^(b/2)*a^(b/2)*a;
#include<stdio.h>
int pow(int a,int b);
int main(){
    int number, raised_power;
    printf("Enter the number:");
    scanf("%d",&number);
    printf("Enter the power of the number:");
    scanf("%d",&raised_power);
    int power = pow(number,raised_power);
    printf("%d raised to power %d = %d", number,raised_power,power);
    return 0;
}
int pow(int a,int b){
    if(b==0){
        return 1;
    }
    if(b%2==0){
        return pow(a,b/2)*pow(a,b/2);
    }
      else{
        return pow(a,b/2)*pow(a,b/2)*a;
      }
}