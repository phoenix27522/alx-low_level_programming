#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a s bytes of a buffer
 * @buffer: buffer to print
 * @byte: bytes of buffer to print
 * @ln_num: line of buffer to print
 *
 * Return: void
 */

void print_line(char *buffer, int byte, int ln_num)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		if (j <= byte)
			printf("%02x", buffer[ln_num * 10 + j]);
		else
			printf("  ");
		if (j % 2)
			putchar(' ');
	}
	for (k = 0; k <= byte; k++)
	{
		if (buffer[ln_num * 10 + k] > 31 && buffer[ln_num * 10 + k] < 127)
			putchar(buffer[ln_num * 10 + k]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			print_line(b, 9, i);
		}
		else
		{
			print_line(b, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
