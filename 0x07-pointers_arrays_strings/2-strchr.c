#include "main.h"
/**
 * _strchr - locates char from a string
 * @s: string to be ssearched
 * @c: char to be located on the string
 * Return: pointer to the first occurrence of c in  s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)

			return (&s[i]);
	}
	return ('\0');
}
