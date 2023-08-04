#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: length of the argument
 * @argv: array of cahr containing the argument
 * Return: int
 */
int main(int argc, char *argv[])
{
	
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}
	return (0);
}
