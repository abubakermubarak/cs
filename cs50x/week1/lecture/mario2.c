#include <stdio.h>

int main(void)
{
    // For each row
    for (int row = 0; row < 3; row++)
    {
        //For each column
        for (int column = 0; column < 3; column++)
        {
            // print one brick
            printf("#");
        }
        printf("\n");
    }
}