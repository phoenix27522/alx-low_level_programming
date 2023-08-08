#include "main.h"
#include <stdlib.h>
/**
 * argstostr - prints args
 * @ac: takes in width of grid
 * @av: height of grid
 * Return: the args one line at a time
 */

char *argstostr(int ac, char **av)
{
	char *arg;
	int count = 0, i = 0, j = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			count++;
			j++;
		}
		i++;
	}
	count = count + ac + 1;

	arg = (char *)malloc(sizeof(char) * count);

	if (arg == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{

		for (j = 0; av[i][j] != '\0'; j++)
		{
			arg[c] = av[i][j];
			c++;
		}

		arg[c] = '\n';
		c++;
	}
	return (arg);
}
