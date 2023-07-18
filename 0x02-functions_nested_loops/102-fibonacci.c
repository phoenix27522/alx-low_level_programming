#include <stdio.h>
/**
 * print_fibonacci - ittrates the next fibonacci number
 * @n: the number of fibonacci number we want
 */
void print_fibonacci(int n)
{
	unsigned long oldsum = 1, currentSum = 1, newsum;
	int i;

	for (i = 1; i <= n; i++)
	{
		printf("%lu", currentSum);
		newsum = currentSum + oldsum;
		oldsum = currentSum;
		currentSum = newsum;
		if (i == 50)
			printf("\n");
		else 
			printf(", ");
	}
}
/**
 * main - prints the first 50 fibonacchi numbers
 * Return: is zero
 */
int main(void)
{
	int n = 50;

	print_fibonacci(n);

	return (0);
}
