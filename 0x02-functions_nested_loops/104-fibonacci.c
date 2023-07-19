#include <stdio.h>
/**
 * print_fibonacci - ittrates the next fibonacci num
 */
int main(void)
{
	unsigned long oldsum = 1, currentSum = 2, newsum;
	int count;

	printf("%lu, %lu, ", oldsum, currentSum);

	for (count = 2; count < 98; count++)
	{
		newsum = currentSum + oldsum;
		printf("%lu", newsum);

		oldsum = currentSum;
		currentSum = newsum;
	}
	printf("\n");
	return 0;
}
