//Write a function that prints "Namaste" if user is indian & "bonjour" if the user is french.
#include<stdio.h>
void Indian();
void French();
int main(){
    char ch;
    printf("Enter I if your are Indian \n Enter F is your are French:");
    scanf("%c",&ch);
    if(ch=='I'){
        Indian();
    }
    else if(ch=='F'){
        French();
    }
    return 0;
}
void Indian(){
    printf("Namaste");
}
void French(){
    printf("Bonjour");
}