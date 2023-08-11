#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @a: char to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char a, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = a;

	return (s);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *calloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	calloc = malloc(size * nmemb);

	if (calloc == NULL)
		return (NULL);

	_memset(calloc, 0, nmemb * size);

	return (calloc);
}
/**
 * _isdigit - retrns 1 if it is digit and 0 if not
 * @c: a int to be checked
 * Return: is int 0 or 1
 */

int _isdigit(char *c)
{
	int i = 0;
	while (c[i])
	{
		if (c[i] >= '0' && c[i] <= '9')
			return (1);
		i++;
	}		
	return (0);
}
/**
 * _strlen - prints the length of the string
 * @s: character
 * Return: it return length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *product;
	int i, j, len1, len2, *result, len_result, prod, sum;

	num1 = argv[1], num2 = argv[2];
	if (argc != 3 || !_isdigit(num1) || !_isdigit(num2))
	{
		printf("Error\n");
		exit(98);
	}

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len_result = len1 + len2;
	result = (int *)_calloc(len_result, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			prod = (num1[i] - '0') * (num2[j] - '0');
			sum = prod + result[i + j + 1];
			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}

	while (len_result > 0 && result[len_result - 1] == 0)
	{
		len_result--;
	}
	product = (char *)malloc(len_result + 1);

	for (i = 0; i < len_result; i++)
	{
		product[i] = result[i] + '0';
		_putchar(product[i]);
	}
	_putchar('\n');

	free(result);
	return (0);
}

