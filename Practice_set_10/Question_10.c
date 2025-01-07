// Solve problem 9 for time using 'typedef' keyword
#include<stdio.h>
typedef struct time
{
    int hour;
    int minute;
    int seconds;

} time;
time compare(time t1,time t2);
int main(){
   time time_1 = {01,00,00};
   time time_2 = {01,00,00};
   printf("time = %d:%d:%d \n",time_1.hour,time_1.minute,time_1.seconds);
   printf("time = %d:%d:%d \n",time_2.hour,time_2.minute,time_2.seconds);
   compare(time_1,time_2);
   return 0;
}

time compare(time t1,time t2){
    int check = 0;
    if(t1.hour ==t2.hour){
        check ++;
    }
    if(t1.minute==t2.minute){
        check ++;
    }
    if(t1.seconds==t2.seconds){
        check ++;
    }
   if(check == 3){
    printf("times are same");
   }
   else{
      printf("times are not same");
   }

}