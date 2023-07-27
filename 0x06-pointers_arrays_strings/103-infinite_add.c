#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 * ahhh! Crazy task! Expand your knowledge
 * Return: address of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_n1, len_n2, carry, sum, k, l;

	for (len_n1 = 0; n1[len_n1]; len_n1++)
		;
	for (len_n2 = 0; n2[len_n2]; len_n2++)
		;
	if (len_n1 > size_r || len_n2 > size_r)
		return (0);
	carry = 0;
	for (len_n1 -= 1, len_n2 -= 1, k = 0; k < size_r - 1; len_n1--, len_n2--, k++)
	{
		sum = carry;
		if (len_n1 >= 0)
			sum += n1[len_n1] - '0';
		if (len_n2 >= 0)
			sum += n2[len_n2] - '0';
		if (len_n1 < 0 && len_n2 < 0 && sum == 0)
		{
			break;
		}
		carry = sum / 10;
		r[k] = sum % 10 + '0';
	}
	r[k] = '\0';
	if (len_n1 >= 0 || len_n2 >= 0 || carry)
		return (0);
	for (k -= 1, l = 0; l < k; k--, l++)
	{
		carry = r[k];
		r[k] = r[l];
		r[l] = carry;
	}
	return (r);
}
