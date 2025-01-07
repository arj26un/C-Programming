//Warite  a function slice() to slice a string. It  should change the 
//original string such that it is now the sliced string. Take 'm' and 'n'
// as the start and ending position for slice
#include<stdio.h>
#include<string.h>
char* slice(char str[], int m,int n){
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];
    str = ptr1;
    str[n] = '\0';
    return str;
}
int main(){
    int m,n;
    printf("Enter m and n :");
    scanf("%d %d",&m,&n);
    char str[]= "Arjun Singh Kushwah";
    
    printf("%s", slice(str,m,n)) ;
    
 return 0;  
}