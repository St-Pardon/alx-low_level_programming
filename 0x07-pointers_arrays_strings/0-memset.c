#include "main.h"

/**
 * _memset - sets memeory
 * @s: pointer params
 * @b: params
 * @n: parms
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
