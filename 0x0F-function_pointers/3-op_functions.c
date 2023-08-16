#include "3-calc.h"
/**
 * op_add - adds a and b
 * @a: int to be added
 * @b: int to be added
 * Return: int sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a and b
 * @a: int to be subtracted
 * @b: int to be subtracted
 * Return: int of sub of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: int to be mul
 * @b: int to be mul
 * Return: int of mul of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a and b
 * @a: int to be div
 * @b: int to be div
 * Return: int of div of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the remainder from div of a and b
 * @a: int to be div
 * @b: int to be div
 * Return: int of mod
 */
int op_mod(int a, int b)
{
	return (a % b);
}
