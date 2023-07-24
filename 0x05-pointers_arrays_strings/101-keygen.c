#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * rand_Char - it helps to randomaize
 * @charSet: to be randomize
 * Return: charset
 */
char rand_Char(char *charSet)
{
	int index;

	index = rand() % strlen(charSet);
	return (charSet[index]);
}

/**
 * generatePassword - generate a random password of the given length
 * @length: length of password
 */
void generatePassword(int length)
{
	char lower_case[] = "abcdefghijklmnopqrstuvwxyz";
	char upper_case[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char digits[] = "123456789";
	char special[] = "!@#$%^&*()_+-=[]{}|;:,.<>?";
	char password[length + 1];
	int i;

	for (i = 0; i < length; i++)
	{
		if (i % 4 == 0)
			password[i] = rand_Char(lower_case);
		else if (i % 4 == 1)
			password[i] = rand_Char(upper_case);
		else if (i % 4 == 2)
			password[i] = rand_Char(digits);
		else
			password[i] = rand_Char(special);
	}
	password[length] = '\0';

	printf("Generated Password: %s\n", password);

}
/**
 * main - first seeds z random number generator using the srand functio
 * with the current time (time(0)) as the seed.
 * This step is crucial to ensure that each run of the program
 * genrates random numbers
 * Return: is zero
 */

int main(void)
{
	srand(time(0));

	int passwordLength = 10;

	generatePassword(passwordLength);

	return (0);
}
