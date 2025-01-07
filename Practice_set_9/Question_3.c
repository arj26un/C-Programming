//Write your own version of strlen function from <string.h>
#include<stdio.h>
#include<string.h>
int main(){
    int length;
    char str[20];
    printf("Enter the string:\n");
    gets(str);
    puts(str);
  length = strlen(str);
  printf("The length of the string is %d",length);
    
    
 return 0;  
}