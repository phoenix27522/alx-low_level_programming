#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1&2
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long sum1 = 0, sum2 = 1, sum;
	unsigned long sum1_new1, sum1_new2, sum2_new1, sum2_new2;
	unsigned long new1, new2;

	for (count = 0; count < 92; count++)
	{
		sum = sum1 + sum2;
		printf("%lu, ", sum);

		sum1 = sum2;
		sum2 = sum;
	}

	sum1_new1 = sum1 / 10000000000;
	sum2_new1 = sum2 / 10000000000;
	sum1_new2 = sum1 % 10000000000;
	sum2_new2 = sum2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		new1 = sum1_new1 + sum2_new1;
		new2 = sum1_new2 + sum2_new2;
		if (sum1_new2 + sum2_new2 > 9999999999)
		{
			new1 += 1;
			new2 %= 10000000000;
		}

		printf("%lu%lu", new1, new2);
		if (count != 98)
			printf(", ");

		sum1_new1 = sum2_new1;
		sum1_new2 = sum2_new2;
		sum2_new1 = new1;
		sum2_new2 = new2;
	}
	printf("\n");
	return (0);
}
