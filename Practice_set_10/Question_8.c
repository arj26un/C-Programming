// Create a structure representing a bank account of a customer.
// What fields did you use and why?
#include <stdio.h>
typedef struct bank_account
{
    char name[30];
    int Account_number;
    int IFSC_code;
    float balance;
} BA;
int main()
{
    int n;
    printf("Enter the number of customer:");
    scanf("%d", &n);
    BA cus[n];
    for (int i = 0; i < n; i++)
    {   printf("\nCustomer %d\n",i+1);
        printf("Customer Name=");
        scanf("%s", &cus[i].name);
        printf("Account Number =");
        scanf("%d", &cus[i].Account_number);
        printf("IFSC Code =");
        scanf("%d", &cus[i].IFSC_code);
        printf("Balance = ");
        scanf("%f", &cus[i].balance);
        printf("\n");
    }

    return 0;
}
