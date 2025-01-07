// take two integers input a and b such that a>b, find the reminder when a is divided by b
# include <stdio.h>
int main(){
 int a,b, reminder;
printf("Enter 1st number:");
scanf("%d",&a);
 printf("Enter 2nd number:");
 scanf("%d",&b);
 if(a>b){
    reminder= a%b;
    printf("The reminder (a/b) is %d",reminder);
 }
 else{
    printf("the reminder is %d",b%a);
 }

 return 0 ;
}