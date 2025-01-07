// WAP to make function to print"Hot" or "Cold" dependent on the temperature user enter.
#include<stdio.h>
#include<stdio.h>
void hot();
void cold();
int main(){
    char ch;
    printf("Enter H if the temperature is hot \n Enter C if the temperature is cold:");
    scanf("%c",&ch);
    if(ch=='H'){
        hot();
    }
    else if(ch=='C'){
        cold();
    }
    return 0;
}
void hot(){
    printf("Hot");
}
void cold(){
    printf("Cold");
}