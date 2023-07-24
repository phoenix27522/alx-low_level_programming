#include "main.h"
/**
 * rev_string - reverse a string in place
 * @s: pointer to the first character of the string
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char temp;

	while (s[length] != 0)

		length++;

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
