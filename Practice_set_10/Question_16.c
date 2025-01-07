//Record contains name of cricketer his age number of test matches that he has played in the average run that he has scored in each test match create an array of structure to hold records of 20 such cricketer and then write a program to read the records
#include<stdio.h>
#include<string.h>
typedef struct cricketer
{
    char name[40];
    int no_of_matches;
    int  age;
    float average_number;

} cricketer;
int main(){
      int n;
    printf("Enter the number of players:");
    scanf("%d", &n);
   
    cricketer cricketer_[n];
    for (int i = 0; i < n; i++)
    { getchar();
        printf("Enter the Crickter name:");
        fgets(cricketer_[i].name, sizeof(cricketer_[i].name),stdin);
        printf("Enter the Number of matches:");
        scanf("%d", &cricketer_[i].no_of_matches);
        printf("Enter the Age:");
        scanf("%d", &cricketer_[i].age);
        printf("Enter the Average run:");
        scanf("%f", &cricketer_[i].average_number);
       
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {   printf("Details of player %d\n",i+1);
        printf("Crickter name: %s", cricketer_[i].name);
        printf("Number of matches: %d\n", cricketer_[i].no_of_matches);
        printf("Age:%d\n", cricketer_[i].age);
        printf("Average runs:%f\n\n", cricketer_[i].average_number);
        
    }
    
    return 0;
}
