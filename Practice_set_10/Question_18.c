//Create a structure 'person' having attributres as age and weight.Access its structure variable using pointers

#include<stdio.h>
typedef struct person
{
      int age;
      int weight;
}person;



int main(){
    person p1;
    person* A=&p1;
    A->age=45;
    A->weight= 78;
    printf("age = %d\nweight = %d",A->age,A->weight);
    
   
}
