#include "cs50.h"
#include <stdio.h>
/*Prototype*/
void mewo(int times);

int main(void)
{
    int n = get_int("how many times to mewo? ");
    mewo(n);
}
/*Define a function prints mewo*/
void mewo(int times)
{
    for (int i = 0; i < times; i++)
    {
        printf("mewo\n");
    }
}