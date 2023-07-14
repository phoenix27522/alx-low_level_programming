#include <stdio.h>

/**
 * main - out puts the alphabet  in lower case
 * Return: is zero
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar (letter);
	}
	putchar ('\n');
	return (0);
}
