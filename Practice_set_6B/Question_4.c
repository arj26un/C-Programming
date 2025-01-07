// WAP to print combination
// (n!)/(r!)(n-r)!
#include <stdio.h>

int factorial(int p);
float combination(int n, int r);
int main()
{
    int number, r;
    printf("Enter total number of objects(n):");
    scanf("%d", &number);
    printf("Enter  number of objects to arrange(r):");
    scanf("%d", &r);
   float  result = combination(number, r);
    printf("The combination of n(%d) and r(%d) is %f",number,r,result);
    return 0;
}
float combination(int n,int r){
    float result = (factorial(n))/((factorial(r))*(factorial(n-r)));
    return result;
}
int factorial(int p){
    if(p==1||p==0){
        return 1;
    }
    int fact = p* factorial(p-1);
    return fact;
}