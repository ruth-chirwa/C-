#include <stdio.h>
#include "cs50.h"
int main(void)
{
    string name = get_string("whats your name?/n");
    printf("hello, %s", name);
    return 0;
}