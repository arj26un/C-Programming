//WAP of function to calculate percentage of 5 subjects
#include<stdio.h>
 float percentage_all(int e,int ss,int h, int m,int s);
int main(){
    int English,Social_Science,Hindi,Maths,Science;
    printf("Enter the marks of English:");
    scanf("%d",&English);
    printf("Enter the marks of Social Science:");
    scanf("%d",&Social_Science);
    printf("Enter the marks of Hindi:");
    scanf("%d",&Hindi);
    printf("Enter the marks of Maths:");
    scanf("%d",&Maths);
    printf("Enter the marks of Science:");
    scanf("%d",&Science);
    int percentage = percentage_all(English,Social_Science,Hindi,Maths,Science);
    printf("Your percentage is %d",percentage);
    return 0;
}
float percentage_all(int e,int ss,int h, int m,int s){
    int total_marks=(e+ss+h+m+s)/5.0;
    return total_marks;
}