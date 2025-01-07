// Create a two - dimensional vector using structure in C
#include<stdio.h>
typedef struct vector{
    int i;
    int j;
}vector;
int main(){
     vector V1;
     printf("Enter the 1st element of vector:");
     scanf("%d",&V1.i);
     printf("Enter the 2nd element of vector:");
     scanf("%d",&V1.j);

printf("The vector is %di+%dj ",V1.i,V1.j);
return 0;
}