#include "main.h"
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pt;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	pt = 1UL << index;
	*n &= ~pt;

	return (1);
}
