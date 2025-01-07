// Create a structure to specify data an student with thses attributes 
//roll number,name,department, course,year Create a function to check if two studnets have the
//same department. pass the two structure variable as input to this function.
#include<stdio.h>
typedef struct students
{
      int roll_number;
      char name[45];
      char department;
      char course[6];
      int year;
}student;
student check(student a,student b);
int main(){
    student S_1 = {1,"Arjun",'A',"BCA",2024};
    student S_2 = {2,"hiper",'A',"BCA",2024};
    check(S_1,S_2);
}
student check(student a,student b){
    if(a.department==b.department){
        printf("Both are from SAME department");
    }
    else{
        
        printf("Both are from DIFFERNT departments");
    }
}