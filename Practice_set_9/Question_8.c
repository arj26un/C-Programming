// WAP to count the occurence of a given character in string;
#include<stdio.h>
#include<string.h>
int main(){
    char str[20], ch;

    int count = 0;
  
    printf("Enter the string:\n");
    gets(str);
    puts(str);
     printf("Enter the character:\n");
     scanf("%c",&ch);
  
  for(int i =0; i< 20;i++){
   if(str[i]==ch){
    count++;
   }
  }
    printf("The %c is %d times in %s",ch,count,str);
    
 return 0;  
}