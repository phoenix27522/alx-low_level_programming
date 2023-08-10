#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates array of integers.
 * @min: the value of starting array
 * @max: the value of ending arrary
 * Return: pointer to the newley created array
 */
int *array_range(int min, int max)
{
	int i, size, *range;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	range = (int *)malloc(sizeof(int) * size);

	if (range == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		range[i] = min++;

	return (range);
}
