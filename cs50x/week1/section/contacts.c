#include "cs50.h"
#include <stdio.h>

int main(void)
{
    string name = get_string("name: ");
    int age = get_int("age: ");
    string number = get_string("Phone Number: ");
    string address = get_string("Address: ");
    printf("contact: %s, %i, lives in %s, and can be reached at %s\n", name, age, address, number);
}
