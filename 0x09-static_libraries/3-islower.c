#include "main.h"
/**
 * _islower - checks if the alphapet is lower
 * @c: char to be checked
 * Return:  1 if lowercase and 0 if  it is uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
