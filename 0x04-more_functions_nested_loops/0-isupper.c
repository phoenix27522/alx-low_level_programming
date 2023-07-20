#include <stdio.h>
/**
 * _isupper - returns 1 if it is capital and zer if it is small
 * @c: int  to be checked
 * Return: is int 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);
	return (0);
}
