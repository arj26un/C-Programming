//Write a function 'sumvector' which returns the sum of two vectors 
//passed to it .The vector must be 2-D.taking multiple number
#include<stdio.h>
typedef struct vector{
    int i;
    int j;

}vector;
vector sumvec(vector V1, vector V2);
int main(){
    int n;
      printf("Enter the number of vector:");
        scanf("%d",&n);
     vector V1[n],SUM_vector = {0,0};
for(int k=0;k<n;k++){
    int a=1,b=2;
     printf("Enter the %dst element of vector:",a);
     scanf("%d",&V1[k].i);
     printf("Enter the %dnd element of  vector:",b);
     scanf("%d",&V1[k].j);
   
       SUM_vector= sumvec(V1[k],SUM_vector);
        
}
    
     
      printf("The sum of two vector is %di+%dj",SUM_vector.i,SUM_vector.j);
      return 0; 
}
 vector sumvec(vector V1, vector V2){
    vector V3 = {V1.i +V2.i, V1.j + V2.j};
    return V3;
}