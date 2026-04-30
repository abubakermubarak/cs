#include "cs50.h"
#include <stdio.h>
/*Prototypes*/
void mewo(int times);
int get_n(void);

int main(void)
{
    int n = get_n();
    
    mewo(n);
}
/*Define a function that get postive number*/
int get_n(void)
{
    int n;
    do
    {
        n = get_int("what's n? ");
    } while (n < 0);
    return n;
}
/*Define a function prints mewo*/
void mewo(int times)
{
    for (int i = 0; i < times; i++)
    {
        printf("mewo\n");
    }
}