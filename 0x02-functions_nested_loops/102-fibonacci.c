#include <stdio.h>
/**
 * print_fibonacci - ittrates the next fibonacci number
 * @n: the number of fibonacci number we want
 */
void print_fibonacci(int n)
{
	int oldsum = 0;
	int currentSum = 1;
	int newsum;
	int i;

	for (i = 1; i < n; i++)
	{
		printf("%d, ", currentSum);
		newsum = currentSum + oldsum;
		oldsum = currentSum;
		currentSum = newsum;
	}
	printf("\n");
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
