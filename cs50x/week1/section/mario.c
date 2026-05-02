#include "cs50.h"
#include <stdio.h>

int main(void)
{
    // Prompt user for height (int)
    int height = get_int("height: ");
    // Print pyramid of that height
    for (int i = 0; i < height; i++)
    {
        printf("#");
        printf("\n");
    }
}