#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'J';
    printf("%c: %d\n", c, _isupper(c));
    c = 'V';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}