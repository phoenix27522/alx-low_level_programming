#include "main.h"
/**
 * print_rev - prints the string in reversed order
 * @s: character to be reversed
 * Return: - reversed string
 */

void print_rev(char *s)
{
	int length;
	int i;

	while (s[length] != '\0')
		length++;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
