// Write  a structure capable of storing date.
// Write a function to function to comapre those dates
#include<stdio.h>
typedef struct date
{
    int day;
    int month;
    int year;

} date;
date compare(date d1,date d2);
int main(){
   date date_1 = {26,9,2004};
   date date_2 = {26,9,2004};
   printf("date = %d/%d/%d \n",date_1.day,date_1.month,date_1.year);
   printf("date = %d/%d/%d \n",date_2.day,date_2.month,date_2.year);
   compare(date_1,date_2);
   return 0;
}

date compare(date d1,date d2){
    int check = 0;
    if(d1.day ==d2.day){
        check ++;
    }
    if(d1.month==d2.month){
        check ++;
    }
    if(d1.year==d2.year){
        check ++;
    }
   if(check == 3){
    printf("Dates are same");
   }
   else{
      printf("Dates are not same");
   }

}