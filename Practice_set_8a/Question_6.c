// WAP to make a percentage calculation formula

#include<stdio.h>
int main(){
    int size, total_marks_per_subject;
    printf("Enter the size of the arrray:");
    scanf("%d",&size);
    int marks[size];
    printf("Enter the total marks per subject :");
    scanf("%d",&total_marks_per_subject);
    int sum =0;
    float total_marks_all_subject = size*total_marks_per_subject;
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf(" The element at %d index is %d \n",i,marks[i]);
       sum = sum +marks[i];
    }
    printf("The percentage of %d subjects is %f",size, (sum*total_marks_per_subject)/total_marks_all_subject);
    return 0;
}