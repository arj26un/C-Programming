// WAP to print permutation.
//  (n!)/(n-r)!
#include <stdio.h>

int factorial(int p);
int permutation(int n, int r);
int main()
{
    int number, r;
    printf("Enter total number of objects(n):");
    scanf("%d", &number);
    printf("Enter  number of objects to arrange(r):");
    scanf("%d", &r);
   int  result = permutation(number, r);
    printf("The permutation of n(%d) and r(%d) is %d",number,r,result);
    return 0;
}
int permutation(int n,int r){
    int result = (factorial(n))/(factorial(n-r));
    return result;
}
int factorial(int p){
    if(p==1||p==0){
        return 1;
    }
    int fact = p* factorial(p-1);
    return fact;
}