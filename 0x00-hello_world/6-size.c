#include<stdio.h>
/**
 * main - function that out put
 * Return: must have the value of zero
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of a int: %zu byts(s)\n", sizeof(int));
	printf("Size of a long int: %zu byts(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
