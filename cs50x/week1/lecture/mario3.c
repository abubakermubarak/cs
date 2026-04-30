#include <stdio.h>

int main(void)
{
    //Make a contant as a number of rows and cols
    const int n = 3;
    // For each row
    for (int row = 0; row < n; row++)
    {
        //For each column
        for (int column = 0; column < n; column++)
        {
            // print one brick
            printf("#");
        }
        printf("\n");
    }
}