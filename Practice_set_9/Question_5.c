// Write  your own version of strcpy function from <string .h>
#include <stdio.h>
#include <string.h>
int main()
{

    char str[20], str1[20];
    printf("Enter the string:\n");
    gets(str);
    puts(str);
    strcpy(str1, str);
    puts(str1);

    return 0;
}
