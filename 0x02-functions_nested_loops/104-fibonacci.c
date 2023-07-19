#include <stdio.h>
/**
 * print_fibonacci - ittrates the next fibonacci number
 */
void print_fibonacci(void)
{
	unsigned long oldsum = 1, currentSum = 2, newsum;
	int count = 2;

	printf("%lu, %lu, ", oldsum, currentSum);

	while (count < 98)
	{
		newsum = currentSum + oldsum;
		printf("%lu", newsum);

		count++;

		if (count != 98)
			printf(", ");
		else
			printf("\n");

		oldsum = currentSum;
		currentSum = newsum;
	}
}
/**
 * main - prints the first 50 fibonacchi numbers
 * Return: is zero
 */
int main(void)
{

	print_fibonacci();

	return (0);
}
