#include "main.h"
/**
 * print_line - print nx of _
 * Return: void
 * @n: number of _ to be printed
 */
void print_line(int n)
{
	int i;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
