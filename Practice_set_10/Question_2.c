//Write a function 'sumvector' which returns the sum of two vectors 
//passed to it .The vector must be 2-D.
#include<stdio.h>
typedef struct vector{
    int i;
    int j;

}vector;
vector sumvec(vector V1, vector V2);
int main(){
     vector V1,V2,V3;
     printf("Enter the 1st element of 1st vector:");
     scanf("%d",&V1.i);
     printf("Enter the 2nd element of 1st vector:");
     scanf("%d",&V1.j);
     printf("Enter the 1st element of 2nd vector:");
     scanf("%d",&V2.i);
     printf("Enter the 2nd element of 2nd vector:");
     scanf("%d",&V2.j);
       V3= sumvec(V1,V2);   
      printf("The sum of two vector is %di+%dj",V3);
      return 0; 
}
 vector sumvec(vector V1, vector V2){
    vector V3 = {V1.i +V2.i, V1.j + V2.j};
    return V3;
}