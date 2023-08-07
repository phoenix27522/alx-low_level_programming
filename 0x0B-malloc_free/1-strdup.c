#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i, len, size;

	len = 0;

	if (str == NULL)

		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
	{

	}
	size = len + 1;

	dup_str = malloc(sizeof(char) * size);

	if (dup_str == NULL)

		return (NULL);

	for (i = 0; i < size; i++)
	{
		dup_str[i] = str[i];
	}

	return (dup_str);

}
