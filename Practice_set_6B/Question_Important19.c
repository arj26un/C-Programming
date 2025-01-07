// WAP to check number of case to reach from one point to another only using right and down case
#include<stdio.h>
int maze(int a,int b,int c,int d);
int main(){
    int number_of_columns,number_of_rows;
    printf("Enter the number of rows:");
    scanf("%d",&number_of_rows);
    printf("Enter the number of columns:");
    scanf("%d",&number_of_columns);
    int totalways = maze(1,1,number_of_rows,number_of_columns);
    printf("The number of ways to reach at end point is  %d",totalways );

} 
int maze(int a,int b,int c,int d){
    int rightways = 0;
    int downways = 0;
    if(a==c&&b==d) return 1;
    if(a==c){
        rightways += maze(a,b+1,c,d);
    }
    if(b==d){
        downways += maze(a+1,b,c,d);
    }
    if(a<c&&b<d){
         rightways += maze(a,b+1,c,d);
         downways += maze(a+1,b,c,d);
    }
    int total_ways = rightways+downways;

     return total_ways;
    }