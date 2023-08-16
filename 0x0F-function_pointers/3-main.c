#include "3-calc.h"
/**
 * main - prints result based op invoked
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: zer0
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;
	char a;
	int (*arr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	arr = get_op_func(argv[2]);

	if (!arr)
	{
		printf("Error\n");
		exit(99);
	}
	a = *argv[2];

	if ((a == '/' || a == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = arr(num1, num2);

	printf("%d\n", result);

	return (0);
}
