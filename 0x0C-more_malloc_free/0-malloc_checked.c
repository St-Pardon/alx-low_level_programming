#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates mem
 * @b: param
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *i = (unsigned int *) malloc(sizeof(b));

	if (i == NULL)
		exit(98);
	return (i);
}
