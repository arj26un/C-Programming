//check whether a number is divisible by 97 or not
#include <stdio.h>

int main(){
    int a;
    printf("write the number = ");
    scanf("%d",&a);
    int b= a%97;
    printf("the value of b is %d",b);
    printf(" \n if b is 0 then it is divible otherwise not");
return 0;
}