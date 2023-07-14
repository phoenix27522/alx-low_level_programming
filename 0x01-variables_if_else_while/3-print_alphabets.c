#include <stdio.h>
/**
 * main - out puts the capital and small letter in a line
 * Return: is zero
 */

int main(void)
{
	char upper, lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar (lower);
	}

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar (upper);
	}

	putchar ('\n');

	return (0);
}
