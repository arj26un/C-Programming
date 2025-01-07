// WAP to print how many chances to reach the end of stairs.
#include<stdio.h>
int stairs(int a);
int main(){
    int number;
    printf("Enter the number of steps in stair:");
    scanf("%d",&number);
    /*you can go step by step or leave one step or leave 2 steps*/
    int steps =stairs(number);
    printf(" The total number of case4s to reach at %d steps  = %d\n ",number,steps);
  return 0;
}
int stairs(int a){
    if(a==1 ||a==2){
        return a;
    }
   if(a==3){
    return a+1;
   }
   return stairs(a-1)+stairs(a-2)+stairs(a-3);
}