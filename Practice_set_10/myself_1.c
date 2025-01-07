// Create a two - dimensional vector using structure in C 
//taking multiple element from user
#include<stdio.h>
typedef struct vector{
    int i;
    int j;
     
      
}vector;
int main(){
    int n;
   printf("Enter the number of vector:");
        scanf("%d",&n);
   
     vector V1[n];
     for(int k =0;k<n;k++){
     printf("Enter the 1st element of vector:");
     scanf("%d",&V1[k].i);
     printf("Enter the 2nd element of vector:");
     scanf("%d",&V1[k].j);

printf("The vector is %di+%dj \n",V1[k].i,V1[k].j);
     }
     return 0;
}