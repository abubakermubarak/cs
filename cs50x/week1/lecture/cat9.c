#include "cs50.h"
#include <stdio.h>

/*Define a function print mewo*/
void mewo(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("mewo\n");
    }
}

int main(void)
{
    mewo(3);
}
