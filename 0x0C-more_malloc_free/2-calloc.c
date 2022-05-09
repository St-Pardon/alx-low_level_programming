#include "main.h"
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - allocate arr
 * @nmemb: param
 * @size: param
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	/*NB memeset was created on prev project/task*/
	_memset(p, 0, (nmemb * size));
	return (p);


}

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
