// WAP to take string as an input from the user using %c and %s confirm 
//that the strings are equal
#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    printf("Enter the word:\n");
    gets(str);
    puts(str);
    char letters[20];
    printf("\nEnter the word:\n");
    for(int i=0; i<20;i++){
        scanf("%c",&letters[i]);
    } printf("\n");
    letters[19]='\0'; 
    for(int i=0; i<20;i++){
        printf("%c",letters[i]);
    }
    return 0;
}