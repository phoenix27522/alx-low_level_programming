#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - prints opcode in hexadecimal
 * @ptr: adress
 * @size: size to print
 */
void print_opcodes(char *ptr, size_t size)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("%.2hhx ", ptr[i]);
		if (i < size - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: always O
 */
int main(int argc, char *argv[])
{
	size_t bytes_to_print;
	char *main_address;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes_to_print = atoi(argv[1]);

	if (bytes_to_print <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	/*main_address = (char *)&main;*/
	print_opcodes((char *)&main, bytes_to_print);

	return (0);
}
