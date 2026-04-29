#include "cs50.h"
#include <stdio.h>

int main(void)
{
    int n;
    /*Make sure n is only postive using do-while*/
    do
    {
        n = get_int("what's n? ");
    }
    /*
    * in do-while what isnide do in done first
    * after that the condition is checkd inside while condtion
    */
    while (n < 0);
    
    for (int i = 0; i < n; i++)
    {
        printf("mewo\n");
    }
}