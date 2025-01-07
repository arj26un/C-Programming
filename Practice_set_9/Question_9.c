// WAP to check whether a given chracter is presented in a string or not
#include<stdio.h>
#include<string.h>
int main(){
    char str[20], ch;

    
  
    printf("Enter the string:\n");
    gets(str);
    puts(str);
     printf("Enter the character:\n");
     scanf("%c",&ch);
  
  for(int i =0; i< 20;i++){
   if(str[i]==ch){
      printf("The %c is presented at %d \n",ch,i+1); 
   }
  }
    
    
 return 0;  
}