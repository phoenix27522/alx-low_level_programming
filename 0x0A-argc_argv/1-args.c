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
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
