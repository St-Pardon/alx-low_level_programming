#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concats str
 * @s1: first param
 * @s2: second param
 * @n: third param
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		return (s2);
	if (s2 == NULL)
		return (s1);

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n > j)
	{
		str = malloc(sizeof(char) * (i + j) + 1);
	}
	else
	{
		str = malloc(sizeof(char) * (i + n) + 1);
	}

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		str[k] = s1[k];

	for (l = 0; l <= n; l++)
	{
		str[k] = s2[l];
		k++;
	}

	return (str);
}
