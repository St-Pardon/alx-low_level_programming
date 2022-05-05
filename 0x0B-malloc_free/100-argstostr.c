#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concats arguments
 * @ac: param
 * @av: param
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *arg;
	int c, i, j, k;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	arg = malloc((c + 1) * sizeof(char));

	if (arg == NULL)
	{
		free(arg);
		return (NULL);
	}

	for (i = j = k = 0; k < c; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			arg[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < c - 1)
			arg[k] = av[i][j];
	}
	arg[k] = '\0';

	return (arg);
}
