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
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int multi, arg1, arg2;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}

	arg1 = _atoi(argv[1]);
	arg2 = _atoi(argv[2]);

	multi = arg1 * arg2;

	printf("%d\n", multi);

	return (0);
}
