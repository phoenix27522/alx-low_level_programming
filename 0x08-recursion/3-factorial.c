# include "main.h"
/**
 * factorial - print the factorial of a number
 * @n: int input
 * Return: int that factorial
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));

}
