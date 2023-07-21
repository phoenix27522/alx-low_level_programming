#include <stdio.h>
#include "main.h"
/**
 * largest_prime_factor - finds the largest prime factor of a given num
 * @num: The number for which to find the largest prime facto
 * Return: always largest num
 **/

int largest_prime_factor(unsigned long int num)
{
	unsigned long int i;
	unsigned long int largest;

	while (num % 2 == 0)
	{
		num = num / 2;
	}

	for (i = 3; i <= num; i = i + 2)
	{
		while (num % i == 0)
		{
			largest = i;

			num = num / i;
		}
	}
	return (largest);
}

/**
 * main - prints out the largest
 * Return: is zero
 */
int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int result;

	result = largest_prime_factor(num);

	printf("%lu\n", result);

	return (0);

}
