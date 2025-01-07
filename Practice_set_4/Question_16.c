// WAP to printf all armstrong number between 1 to 500
//  153 = 1*1*1+5*5*5+3*3*3
//  1= 1*1
//  9474 = 9*9*9*9+4*4*4*4+7*7*7*7+4*4*4*4
#include <stdio.h>
int main()
{
    int count, number, reminder, power, check;
    for (int i = 1; i <= 500; i++)
    {
        number = i;
        count = 0;
        check= 0;
        while (number > 0)
        { 
            count++;
            number = number / 10;
        }
        number=i;// ye isliye liya kyuki yha number ki value 0 ho jaygi jo humne count me use ki hai isliye humne dubra number =i kiya hai
        for (int j = 1; j <= count; j++)
        {     while (number>0)
        {
            power =1;
            reminder = number % 10;
            
            for (int k = 1; k <= count; k++)
            {
                power = power * reminder;
            }
            check = power + check;
            number = number / 10;
        }
        }
        
        if (check==i)
        {
            printf("%d is the armstrong number\n\n",i);
        }
        
    }

    return 0;
}