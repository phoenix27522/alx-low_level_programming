#include "main.h"
/**
 * _isalpha - checks if it is alphabet
 * @c: to be checked
 * Return: one f alphabet and zero if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
