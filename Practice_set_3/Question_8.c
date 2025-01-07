/*WAP to check if a student passes or fail
marks>30 is pass
marks <= is fail */
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks:");
    scanf("%d", &marks);
    if (marks > 30)
    {
        printf("You passes the exam");
    }
    else
    {
        printf("You are fail");
    }
    return 0;
}
