/*
WAP to make a function realetd to 
1. good morning function which prints good morning
2. good night function which prints good night
3. good afternoon function which prints "good night"*/

#include<stdio.h>
void good_morning();
void good_afternoon();
void good_night();
int main() {
    good_morning();
    good_afternoon();
    good_night();
    
    return 0;
}
void good_morning(){
    printf("Good Morning\n");
}
void good_afternoon(){
    printf("Good Afternoon\n");
}
void good_night(){
    printf("Good Night\n");
}