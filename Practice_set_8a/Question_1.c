// given an array of marks of students, if the mark of 
//any student is less than 35 print its roll number.
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the arrray:");
    scanf("%d",&size);
    int student[size];
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&student[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if(student[i]<35)printf(" %d and marks = %d \n",i+1,student[i]);
    }
    return 0;
}