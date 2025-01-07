// WAP to print good morning n times using function.
#include <stdio.h>
int greeting(int a);
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    greeting(number);
    return 0;
}
int greeting(int a){
    if(a==0){
        return 0;
    }
    printf("good morning\n");
    return greeting(a-1);
}