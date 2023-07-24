#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int length = 0;
	int i;
	int start_index;
	int half_length;

	while (str[length] != '\0')

		length++;

	half_length = length / 2;
	start_index = length % 2 == 0 ? half_length : half_length + 1;

	for (i = start_index; str[i] != '\0'; i++)

		_putchar(str[i]);

	_putchar('\n');

}
