#include "main.h"
/**
 * main - outputs the alphbets in lowercase
 * Return: is zero
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}

	_putchar('\n');
}
