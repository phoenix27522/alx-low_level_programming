#include "main.h"
/**
 * _isdigit - retrns 1 if it is digit and 0 if not
 * @c: a int to be checked
 * Return: is int 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
