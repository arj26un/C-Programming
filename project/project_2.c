// Guessing the correct number taking from computer
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    
    // Seed the random number generator with the current time
    srand(time(0)); 
    number = rand() % 1000 + 1;  // Random number between 1 and 100
    
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 1000.\nPlease guess that number! \n");

    // Loop until the user guesses the correct number
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;  // Count each guess attempt

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("You guessed the correct number in %d attempts.\n", attempts);
        }
    } while (guess != number);
         if (attempts<2)
         {
            printf("BHAOT BHADIYA KHELA HO !\n");
         }
         else if (attempts<5)
         {
            printf("BHADIYA KHELE HO !\n");
         }
         
        else  if (attempts<10)
         {
            printf("THIK KHELE HO!\n");
         }
         else if (attempts<20)
         {
            printf("Abe chomu ho ka be kitna khrab dimag hai !\n");
         }
         else 
         {
            printf("chulu bhar paani laye thumare dubne ke liye!\n");
         }
         
    return 0;
}
