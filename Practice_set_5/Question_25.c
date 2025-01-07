/* WAP to print
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

*/
#include <stdio.h>
int main()
{
    int number, _2n;
    printf("enter the number:");
    scanf("%d", &number);
    _2n = 2 * number - 1;
    int max;
    for (int i = 1; i <= _2n; i++)
    {
        for (int j = 1; j <= _2n; j++)
        {
            int a = i;
            if (i > number)
            {
                a = 2 * number - i;
            }
            int b = j;
            if (b > number)
            {
                b = 2 * number - j;
            }
           if(a<b){
            max =a;
           } 
           else{
            max= b;
           }
           printf("%d ",number+1-max);
        }
        printf("\n");
    }
    return 0;
}