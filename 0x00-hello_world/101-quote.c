#include <unistd.h>
/**
 * main - output
 * Return: must be one
 */

int main(void)
{
	const char *message =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int messageLength = 59;

	write(1, message, messageLength);
	return (0);
}

