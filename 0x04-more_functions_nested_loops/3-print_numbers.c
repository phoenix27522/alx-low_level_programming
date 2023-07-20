#include "main.h"
/**
 * print_numbers - print numbers from 0 to 0 followed by new line
 * Returns: nothing becouse it is viod
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}

	_putchar('\n');
}
