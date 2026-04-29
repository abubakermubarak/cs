#include "cs50.h"
#include <stdio.h>
/*Prototype*/
void mewo(int n);

int main(void)
{
    mewo(3);
}
/*Define a function prints mewo*/
void mewo(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("mewo\n");
    }
}