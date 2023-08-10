#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked -  allocates memory using malloc
 * @b: size in byte
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
