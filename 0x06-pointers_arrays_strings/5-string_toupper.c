#include "main.h"

/**
 * string_toupper - to upper case
 * @n: param
 * Return: char
 */

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] > 96 && n[i] < 123)
		{
			n[i] = n[i] - 32;
		}
	}
	return (n);
}
