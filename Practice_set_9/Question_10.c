// WAP to reverse the string withoiut string function
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];

    printf("Enter the string:\n");
    gets(str);
    puts(str);
    int count = 0;
  
    while(str[count]!='\0')
    {
        count++;
      
    }
    
    for (int i = 0; i < (count)/2; i++)
    {
        char temp = str[i];
        str[i] = str[count - 1 - i];
        str[count - 1 - i] = temp;
         
    }
    puts(str);
  
    return 0;
}