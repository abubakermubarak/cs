#include "cs50.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    /*The program will give us the same result each time
    * we need to seed the rand() with starting point
    * we will used srand
    */
    //Generate random numbers
    int random = rand();
    printf("random number: %i\n", random);    
}