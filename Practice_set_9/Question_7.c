// WAP to decrypt the string encrypted function in problem 6
#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    printf("Enter the string code:\n");
    gets(str);
    puts(str);
  
  for(int i =0; i< 20;i++){
    str[i] = str[i] -1;
  }
    puts(str);
    
 return 0;  
}