#include "main.h"
/**
 * _strncat - concatinates most n char from z string src to string dest
 * @dest: pointer to z destination string, where z src string concates
 * @src: pointer to z source string,which char will be appended to dest
 * @n: maximum number of char to be taken from src and concat to dest
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	
	int i;
	int j;
	int length = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		length++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[length + j] = src[j];
	}

	dest[length + j] = '\0';

	return (dest);
}

