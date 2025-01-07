/* WAP give grades to a student
Marks < 30 is C grade
30<=Marks<40 is B grade
70<=Marks<90 is A grade
90<=Marks <=100 is A+ grade*/
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks:");
    scanf("%d", &marks);
    if (marks>=0 && marks <30)
    {
        printf("Your grade is C");
    }
    else if ( marks>=30 && marks <70)
    {
        printf("Your grade is B");
    }
    else if ( marks>=70 && marks <90)
    {
        printf("Your grade is A");
    }
    else if ( marks>=90 && marks <100)
    {
        printf("Your garde is A+");
    }
    else
    {
        printf("You have entered wrong marks");
    }
    return 0;
}