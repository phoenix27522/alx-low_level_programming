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
		for (b = a + 1; b <= 99; b++)
		{
			putchar('0' + (a / 10)); /*takes dividn*/
			putchar('0' + (a % 10)); /*takes the remainder*/
			putchar(' ');
			putchar('0' + (b / 10));
			putchar('0' + (b % 10));

			if (a / 10 != 9 || a % 10 != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
