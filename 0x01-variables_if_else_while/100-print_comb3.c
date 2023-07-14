#include <stdio.h>
/**
 * main - out put the the combination of two digit
 * Return: is zero
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			putchar('0' + num1);
			putchar('0' + num2);

			if (num1 != num2 && num1 < num2)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
