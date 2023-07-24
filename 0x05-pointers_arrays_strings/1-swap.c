#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: value to be swaped with b
 * @b: value to be swaped with a
 */

void swap_int(int *a, int *b)
{
	int num = *a;

	*a = *b;

	*b = num;
}
