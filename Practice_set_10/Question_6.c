// Create an array and solve problem 5 and also print using function
#include <stdio.h>
typedef struct complex_number
{
    int real;
    int imaginary;
} complex_number;
complex_number display(complex_number CP);
int main()
{
    int n;
    printf("Enter the number of vector:");
    scanf("%d", &n);
    complex_number CP[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the real number of Complex number:");
        scanf("%d", &CP[i].real);
        printf("Enter the imaginary number of Complex number:");
        scanf("%d", &CP[i].imaginary);
        display(CP[i]);
    }

    return 0;
}
complex_number display( complex_number CP){
    printf("The complex number is %d+%di \n",CP.real,CP.imaginary);
}