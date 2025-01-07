// WAP to using recurssion to calculte nth element of fibonacci series
#include <stdio.h>
int function(int term);

int main()
{
    int term;
    printf("Enter the term you want in fibonacci series:");
    scanf("%d", &term);
    printf("The fibonacci series of %d  ", term);
    int series = function(term);
    printf("= %d", series);
}
int function(int term)
{
    
    if (term == 1 || term == 2)
    {
        return term - 1;
    }
    else
    {
        int series = function(term - 1) + function(term - 2);

        return series;
    }
}