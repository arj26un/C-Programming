// WAP to print a multiplication table of a given number
#include<stdio.h>
int main(){
int number;
char mutiply = '*';
char  equal = '=';
printf("Enter the number:");
scanf("%d",&number);
printf("The table of  %d \n",number);
for (int i = 1; i < 10; i++)
{
    printf(" %d %c %d %c %d \n",number,mutiply,i,equal,number*i);
}
return 0;
}


