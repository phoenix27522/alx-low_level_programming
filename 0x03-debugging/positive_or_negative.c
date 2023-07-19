#include "main.h"

/**
 * main - it out puts negative posetive and zero based on the condition
 * Return: is zero
 */
void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
