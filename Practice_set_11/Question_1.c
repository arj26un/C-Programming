//WAP to read 3 integers from  a file
// #include<stdio.h>
 
//  int main(){
//     FILE *ptr;
//     ptr = fopen("integer.txt","r");
//     int num;
//     while(fscanf(ptr,"%d",&num)!=EOF) {
//         printf(" %d\n",num);
//     }
//     fclose(ptr); 
//     return 0;
//  }


#include <stdio.h>

int main() {
    FILE *filePtr;
    int num1, num2, num3;

    // Open the file in read mode
    filePtr = fopen("integer_file", "r");

    // Check if the file was opened successfully
    if (filePtr == NULL) {
        printf("Error: Could not open file!\n");
        return 1;  // Exit the program if the file can't be opened
    }

    // Read three integers from the file
    fscanf(filePtr, "%d %d %d", &num1, &num2, &num3);

    // Print the numbers
    printf("The three integers are: %d, %d, %d\n", num1, num2, num3);

    // Close the file
    fclose(filePtr);

    return 0;
}
