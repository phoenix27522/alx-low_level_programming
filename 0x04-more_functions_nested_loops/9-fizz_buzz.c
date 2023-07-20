#include <stdio.h>
/**
 * main - print fizz for multible 3 buzz multiple 5 and fizxbuzz for 3&5
 * Return: void
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i == 0)
		{
			printf("%d ", i);
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("fizzbuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
