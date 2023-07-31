#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: the matrix
 * @size: the size of the matrix
 * Return: no return value
 */

void print_diagsums(int *a, int size)
{
	int i;
	int diagonal_sum = 0;
	int diagonal_2_Sum = 0;

	for (i = 0; i < size; i++)
	{
		diagonal_sum = diagonal_sum + a[i * size + i];
		diagonal_2_Sum += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", diagonal_sum, diagonal_2_Sum);
}
