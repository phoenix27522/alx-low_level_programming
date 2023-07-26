#include "main.h"
/**
 * _strncpy - copy the character from the source to the destination
 * @dest: which is the destination buffer to copy the string
 * @src: which is the source string to be copied
 * @n: amt char to be copied
 * Return: zero
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; ++i)
	{
		dest[i] = src[i];
	}

	while (i < n)
		dest[i++] = '\0';


	return (dest);
}
