#include "main.h"
/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int started = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	temp = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (temp > 0)
	{
		if ((n & temp) || started)
		{
			_putchar((n & temp) ? '1' : '0');
			started = 1;
		}
		temp >>= 1;
	}
}
