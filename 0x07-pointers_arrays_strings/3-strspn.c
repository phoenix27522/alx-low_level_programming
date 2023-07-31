#include "main.h"
/**
 * _strspn -  a function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: the length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i;
	int j;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				found = 1;
				break;
			}
		}

			if (!found)
			{
				return (len);
			}
	}
	return (len);
}

