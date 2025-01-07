// Create a structure type book with name price
// and no. of pages as its attributes
#include <stdio.h>
#include <string.h>
typedef struct book
{
    char name[40];
    int price;
    int no_of_pages;
} book;
int main()
{
    int n;
    printf("Enter the number of books:");
    scanf("%d", &n);
    int sum =0;
    book book_1[n];
    for (int i = 0; i < n; i++)
    { getchar();
        printf("Enter the Book name:");
        fgets(book_1[i].name, sizeof(book_1[i].name),stdin);
        printf("Enter the Price of book:");
        scanf("%d", &book_1[i].price);
        printf("Enter the Number of pages:");
        scanf("%d", &book_1[i].no_of_pages);
       
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {   printf("Details of Book %d\n",i+1);
        printf("Book name: %s", book_1[i].name);
        printf("Price of book: %d\n", book_1[i].price);
        printf("Number of pages:%d\n\n", book_1[i].no_of_pages);
        sum = sum+book_1[i].price;
    }
    printf("The total price of books = %d",sum);
    return 0;
}