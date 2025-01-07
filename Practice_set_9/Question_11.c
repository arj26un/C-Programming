// Write a fun to insert a new character in a string at a given position

#include <stdio.h>
#include <string.h>
int main()
{
    char str[20], ch;
    int index, count = 0;
 
    printf("Enter the string:\n");
    gets(str);
    puts(str);
    printf("Enter the index:\n");
    scanf("%d", &index);
    printf("Enter the character:\n");
    scanf(" %c", &ch);
    while (str[count] != '\0')
    {
        count++;
    }

    for (int i = count; i >= index; i--)
    {
        str[i + 1] = str[i];
    }
    str[index] = ch;
    puts(str);

    return 0;
}