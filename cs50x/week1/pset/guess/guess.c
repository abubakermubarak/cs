#include "cs50.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Macros
#define  ALLOWED_ATTEMPTS 7
#define  DIFFICULTY 50
//Prototypes
int checkGuess(int guess, int number);
int chooseDifficulty(void);
int rand_int(int min, int max);

int main(void)
{
    //Generate random numbers
    int random = rand_int(1, 100);
    //Prompt user to choose difficulty
    int choice = chooseDifficulty();
    //Prompt user to enter a guess
    int guess = get_int("Enter your guess: ");
    int attempts = 1;
    int status = checkGuess(guess, random);

    while (status)
    {
        
        //Compare guess with the random number
        if (guess > random)
        {
            printf("Too high! Try again\n");
            printf("Attempts remaining: %i\n", ALLOWED_ATTEMPTS - attempts);
            guess = get_int("Enter your guess: ");
            attempts++;
        }
        else if (guess < random)
        {
            printf("Too low! Try again\n");
            printf("Attempts remaining: %i\n", ALLOWED_ATTEMPTS - attempts);
            guess = get_int("Enter your guess: ");
            attempts++;
        }
        else
        {
            break;
        }
    }
    printf("Correct!\n");
}
//Random integer in range [min, max]
int rand_int(int min, int max) 
{
    srand(time(NULL));
    return (rand() % (max - min + 1)) + min;
}
//Compare two int's and return int corpond to each case
int checkGuess(int guess, int number)
{
    if (guess > number)
    {
        return 1;
    }
    else if (guess < number)
    {
        return -1;
    }
    return 0;
}
//Prompt user to chooses level of defcaulty
int chooseDifficulty(void)
{
    int level;
    do
    {
        level = get_int("Choose Difficulty:\n1. Easy   (1 - 50)\n2. Medium (1 - 100)\n3. Hard   (1 - 500)\n\nEnter choice: ");
    } while (level < 1 || level > 3);
    return level;
}