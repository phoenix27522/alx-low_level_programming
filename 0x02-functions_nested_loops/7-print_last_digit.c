#include "main.h"
/**
 * print_last_digit - find the last digit of the number
 * @num: the number
 * Return: the last degit of the number
 */
int print_last_digit(int num)
{
	int lastdigit;

	if (num < 0)
	{
		num = -num;
	}

	lastdigit = num % 10;

	_putchar('0' + lastdigit);

	return (lastdigit);
}
