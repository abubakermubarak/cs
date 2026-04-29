#include "cs50.h"
#include <stdio.h>

int main(void)
{
    int n = get_int("what's n? ");
    /*Make sure n is only postive*/
    /* but this is valid for one time because we use if*/
    if (n < 0)
    {
        n = get_int("what's n? ");
    }

    for (int i = 0; i < n; i++)
    {
        printf("mewo\n");
    }
}