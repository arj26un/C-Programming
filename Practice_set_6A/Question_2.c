// WAP to convert Celsius temp to Farhenheit using funtion

#include <stdio.h>
float temperature(int Celsius);
int main()
{
    int Celsius;
    
    printf("Enter the the temperature in Celsius:");
    scanf("%d",&Celsius);
    float Farheneit = temperature(Celsius);
    printf("%d Celsius = %f Farheneit", Celsius, Farheneit);

    return 0;
}
float temperature(int Celsius)
{
    int farheneit = (Celsius * (9 / 5)) + 32;
    return farheneit;
}