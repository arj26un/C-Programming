// WAP to print a multiplication table of a 10 in reverse order
#include<stdio.h>
int main(){
int number =10 ;
char mutiply = '*';
char  equal = '=';
printf("The table of  %d \n",number);
for (int i = 10;i>=1 ; i--)
{
    printf(" %d %c %d %c %d \n",number,mutiply,i,equal,number*i);
}
return 0;
}