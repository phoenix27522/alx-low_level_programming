#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @a: char to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char a, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = a;

	return (s);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *calloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	calloc = malloc(size * nmemb);

	if (calloc == NULL)
		return (NULL);

	_memset(calloc, 0, nmemb * size);

	return (calloc);
}
