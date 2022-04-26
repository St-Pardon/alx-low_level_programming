#include "main.h"
/**
 * _memcpy - copy memory
 * @dest: pointer params
 * @src: pointer params
 * @n: unsigned int param
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
