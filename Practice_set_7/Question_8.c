/*
Write a function to compute 
the greatest common divisior of two given numbers
*/
int checking(int a,int b);
int min(int a,int b);
#include<stdio.h>
int main(){
    int number_1, number_2;
    printf("Enter 1st number:");
    scanf("%d",&number_1); 
    printf("Enter 2nd number:");
    scanf("%d",&number_2);

    int HCF = checking(number_1,number_2); 
    printf("The H.C.F of (%d,%d)is %d",number_1,number_2,HCF);
return 0;
}
int checking(int a,int b){
    int number = min(a,b);
    int hcf =1;
    for(int i = 1;i<=number;i++){
        if((a%i==0)&&(b%i==0)){
           hcf = i;
        }
    }
    return hcf;
}
int min(int a,int b){
 int min;
  if(a<b){
    return a;
  }
  else{
     return b;
  }
    
}