// Print the factroial of first 'n' numbers
#include <stdio.h>
int fact(int i);
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    for (int i = 0; i <= number; i++)
    {
        
        fact(i);

        printf("%d! = %d\n", i, fact(i));
    }
    return 0;
}
int fact(int i)
{
    if(i==0||i==1){
        return  1;
    }
    int result = i* fact(i-1);
    return result;
}