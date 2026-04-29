#include "cs50.h"
#include <stdio.h>

int main(void)
{
    int n;
    /*Make sure n is only postive using while*/
    while (true)
    {
        n = get_int("what's n? ");
        /* if n is postive get outside the loop*/
        if (n >= 0)
        {
            break;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("mewo\n");
    }
}