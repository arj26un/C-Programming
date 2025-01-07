// WAP to check what will the folloeing line produce in ac C program
// printf("%d %d %d \n",a,++a,a++);
//if a=4 
// output 4/5/5 (compiler detect it self if complier is left to right)
// output 6,6,4(compiler detect it self if complier is right to left) 
#include<stdio.h>
int main(){
    int a;
    printf("Enetr the number:");
    scanf("%d",&a);
   
    printf("%d %d %d \n",a,++a,a++);
    return 0;
}