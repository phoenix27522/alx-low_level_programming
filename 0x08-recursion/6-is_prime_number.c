#include "main.h"

int prime_num(int n, int i);

/**
 * is_prime_number - returns 1 if input is a prime num, otherwise return 0
 * @n: input number
 * Return: int that is prime number
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (prime_num(n, 2));

}

/**
 * prime_num - returns 1 if input is a prime num, otherwise return 0
 * @n: input number
 * @i: divider
 * Return: 1 if prime 0 otherwise
 */
int prime_num(int n, int i)
{

	if (i >= n)
		return (1);
	if (n % i == 0)
		return (0);

	return (prime_num(n, i + 1));
}
