#include <stdio.h>
/**
 * print_fibonacci - ittrates the next fibonacci number
 * @n: the number of fibonacci number we want
 */
void print_fibonacci(unsigned long n)
{
	unsigned long oldsum = 1, currentSum = 1, newsum;
	unsigned long evensum = 0;

	while (currentSum <= n)
	{
		if ((currentSum % 2) == 0)
			evensum = evensum + currentSum;

		newsum = currentSum + oldsum;
		oldsum = currentSum;
		currentSum = newsum;
	}
	printf("%lu\n", evensum);
}
/**
 * main - prints the first 50 fibonacchi numbers
 * Return: is zero
 */
int main(void)
{
	int n = 4000000;

	print_fibonacci(n);

	return (0);
}
