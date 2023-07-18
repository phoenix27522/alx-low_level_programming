#include "stdio.h"
/**
 * main -  prints the sum of all  multiple
 * 3 or 5 that are found under 1024
 * Return: is zero
 */
int main(void)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;
	int totalsum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum1 = sum1 + i;
		}
			else if (i % 5 == 0)
			{
				sum2 = sum2 + i;
			}
	}
	totalsum = sum1 + sum2;
	printf("%d\n", totalsum);
	return (0);
}
