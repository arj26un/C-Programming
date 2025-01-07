//WAP to store roll numbver and marks obtained by n students
// side by side in a matrix
#include<stdio.h>
int main(){
    int No_of_students[10][2];
    // Printf("Enter the number of students:");
    // scanf("%d",&No_of_students);
    printf("Enter the Roll no. of students:");
    for (int i = 0; i <10; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&No_of_students[i][j]);
        }
             
    }
     for (int i = 0; i <10; i++)
    {
        for (int j = 0; j < 2; j++)
        {
       
        printf("%d  ",No_of_students[i][j]);
        }
        printf("\n");     
    }
    return 0;
}