// WAP to print steps to solve a tower of Hanoi

#include <stdio.h>
void tower(int n, char S, char H, char D);
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    tower(number, 'A', 'B', 'C');
    return 0;
}

void tower(int n, char s, char h, char d)
{
    if (n == 0)
    {
        return 0;
    }
    tower(n - 1, s, d, h);
    printf(" %c => %c\n", s, d);
    tower(n - 1, h, s, d);
    return;
}
