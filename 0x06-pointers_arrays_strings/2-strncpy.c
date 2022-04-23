#include "main.h"

/**
 * _strncpy - copies string
 * @dest: pointer
 * @src: pointer
 * @n: params
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i != n; i++)
	{
		dest[i] = *(src + i);
	}

	return (dest);
}
