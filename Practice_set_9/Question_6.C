// WAP to encrypt a string by adding 1 to the ASCII value of the string
#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    printf("Enter the string:\n");
    gets(str);
    puts(str);
  
  for(int i =0; i< 20;i++){
    str[i] = str[i] +1;
  }
    puts(str);
    
 return 0;  
}