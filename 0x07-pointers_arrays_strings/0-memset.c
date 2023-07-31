#include "main.h"
/**
 * _memset -  fill a block of memory with a specified value.
 * @s: This is the starting address of the box
 * @b: This is the character that you want to put in each cell
 * @n: This is the number of cells (bytes) you want to fill with the character
 * Return: the pointer to the memory block after filling
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
		s[i] = b;

	return (s);
}
