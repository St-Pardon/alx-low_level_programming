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
	unsigned int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n > j)
		n = j;

	str = malloc(sizeof(char) * (i + n + 1));

	if (str == NULL)
	{
		return (0);
	}

	for (k = 0; k < i; k++)
		str[k] = s1[k];

	for (; k < (i + n); k++)
	{
		str[k] = s2[k - i];
	}
	str[k] = '\0';

	return (str);
}
