#include "cs50.h"
#include <stdio.h>

int main(void)
{
    int x = get_int("What's x? ");
    int y = get_int("what's y? ");

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    // if nothing from the above then the numbers are equal
    else 
    {
        /* print is equal */
        printf("x is equal to y\n");
    }
    
}