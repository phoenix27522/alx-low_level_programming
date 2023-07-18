#include "main.h"
/**
 * 9-times_table - print out times table of nine
 * Return: the multiplication table in square format
 */
void times_table(void)
{
	int i, j;
	int count = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int result = i * j;

			_putchar('0' + result);
			_putchar(',');
			_putchar(' ');

			if (count % 9 == 0)
			{
				_putchar('\n');
			}
		}
	}
}
