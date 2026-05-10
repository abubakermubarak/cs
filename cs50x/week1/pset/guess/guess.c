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
    int random = rand_int(10, 20);
    printf("random number: %i\n", random);
}
int rand_int(int min, int max)
{
    srand(time(NULL));
    int random = rand();
    return random % (max - min + 1) + min;
}