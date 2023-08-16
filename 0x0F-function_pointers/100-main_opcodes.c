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
	void *main_address;
	int num_bytes;
	size_t main_size;
	size_t bytes_to_print;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	main_address = (void *)main;
	main_size = (size_t)print_opcodes - (size_t)main;
	bytes_to_print = num_bytes < main_size ? num_bytes : main_size;
	print_opcodes(main_address, bytes_to_print);

	return (0);
}
