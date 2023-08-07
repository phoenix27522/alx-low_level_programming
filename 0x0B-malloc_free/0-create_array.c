#include "main.h"
#include <stdlib.h>
/**
 * create_array - it creates an arrya with specific size
 * @size: is the size of the array unknown size
 * @c: char input
 * Return: c
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *c1 = &c;

	c1 = malloc(size * sizeof(char));
	if (size == 0)
		return ('\0');

	for (i = 0; i < size; i++)
	{
		*(c1 + i) = c;

	}
	*(c1 + i) = '\0';

	return (c1);
}


