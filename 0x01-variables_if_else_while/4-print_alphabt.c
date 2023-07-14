#include <stdio.h>
/**
 * main - out puts  all the alphapets except q and e
 * Return: is zero
 */
int main(void)
{
	char missing;

	for (missing = 'a'; missing <= 'z'; missing++)
	{
		if (missing != 'q' && missing != 'e')
		{
			putchare(missing);
		}
	}

	putchar ('\n');
	return (0);
}


