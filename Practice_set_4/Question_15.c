//WAP to print the ASCII values and their equivalent charcater of 26 alphabet in small as well as capital
# include <stdio.h>
int main(){
    printf("The value of capital Alphabets ::::\n");
 for (int i = 65; i <= 90; i++)
 {
    printf("%d ===> %c\n\n",i,i);
    
 }
 printf("The value of small Alphabets ::::\n");
 for (int i = 97; i <= 122; i++)
 {
    printf("%d ===> %c\n\n",i,i);
    
 }
 
 

 return 0 ;
}