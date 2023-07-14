#include <stdio.h>
/**
 * main - out puts the combination of two number
 * Return: iz zero
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 99; a++)
	{
		for (b = 0; b <= 99; b++)
		{
			putchar('0' + (a / 10)); /*takes dividn*/
			putchar('0' + (a % 10)); /*takes the remainder*/
			putchar(' ');
			putchar('0' + (b / 10));
			putchar('0' + (b % 10));

			if (a != 99 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
