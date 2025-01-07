// WAp to print area of sqaure with side a using library function
#include<stdio.h>
#include<math.h>
 int square(int a){
    return pow(a,2);
 }
int main(){
    int side;
    printf("Enetr the number:");
    scanf("%d",&side);
    int area = square(side);
    printf("The area of the square with side %d is %d",side,area);
}