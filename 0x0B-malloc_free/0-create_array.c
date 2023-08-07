#include <stdlib.h>
#include "main.h"

/**
 * create_array - it creates an arrya with specific size
 * @size: is the size of the array unknown size
 * @c: char input
 *
 * Return: pointer and null is size is zero
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *c1;

	c1 = (char *) malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (c1 == NULL)
		return (0);

	for (i = 0; i < size; i++)
	{
		*(c1 + i) = c;

	}
	*(c1 + i) = '\0';

	return (c1);
}


