// WAP using function to find average of three numbers.
#include <stdio.h>
float  sol(int a,int b,int c);
int main()
{
    int number_1, number_2, number_3;
    printf("Enter the 1st number:");
    scanf("%d", &number_1);

    printf("Enter the 2nd number:");
    scanf("%d", &number_2);

    printf("Enter the 3rd number:");
    scanf("%d", &number_3);
    float average = sol(number_1,number_2,number_3);
    printf("The average of (%d+%d+%d)/3 = %f",number_1,number_2,number_3,average);
    return 0;

}
 float sol(int a,int b,int c){
    float average = (a+b+c)/3.0;
    return average;
}