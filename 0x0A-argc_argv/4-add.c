#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, found, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	found = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && found == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			found = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			found = 0;
		}
		i++;
	}

	if (found == 0)
		return (0);

	return (n);
}

/**
 * _strlen - prints the length of the string
 * @s: character
 * Return: it return length
 */

int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
	{
		length++;

	}
	return (length);
}

/**
 * _isdigit - retrns 1 if it is digit and 0 if not
 * @c: a int to be checked
 * Return: is int 0 or 1
 */

int _isdigit(char *c)
{
	if (*c >= '0' && *c <= '9')
		return (1);
	return (0);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j, num;

	for (i = 0; i < argc; i++)
	{
		

		for (j = 0; j < _strlen(argv[i]); j++)
		{
			if (_isdigit(argv[i][j]) == 0)
				printf("Error\n");
		}
		
		num = _atoi (argv[i]);

		sum = sum + num;

		printf("%d\n", sum);
	}

	return (0);
}
