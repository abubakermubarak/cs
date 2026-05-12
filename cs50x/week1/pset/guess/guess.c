#include "cs50.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_int(int min, int max);

int main(void)
{
    /*The program will give us the same result each time
    * we need to seed the rand() with starting point
    * we will used srand
    */
    //Generate random numbers
    int random = rand_int(1, 100);
    //Prompt user to enter a guess
    int guess = get_int("Enter your guess: ");
    //Compare guess with the random number
    if (guess > random)
    {
        printf("Too high! Try again\n");
    }
    else if (guess < random)
    {
        printf("Too low! Try again\n");
    }
    else
    {
        printf("Correct!\n");
    }
}
// Random integer in range [min, max]
int rand_int(int min, int max) 
{
    srand(time(NULL));
    return (rand() % (max - min + 1)) + min;
}
