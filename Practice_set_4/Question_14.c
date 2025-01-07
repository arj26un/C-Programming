//WAP to find the value of one number raised to the power of another
# include <stdio.h>
int main(){
     int number,raised_power,power=1;
     printf("Enter the number:");
     scanf("%d",&number);
      printf("Enter the raised power number:");
     scanf("%d",&raised_power);
      
      for (int i = 1; i <= raised_power; i++)
      {
        power = number * power ;

      }
      printf("the %d raised_power of %d = %d ", raised_power,number,power);

 return 0 ;
}