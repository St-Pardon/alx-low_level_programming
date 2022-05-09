#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates mem
 * @b: param
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *i = malloc(b);
	/*size of parameter alreay added from funct call*/
	/*Type cast not needed*/

	if (i == NULL)
		exit(98);
	return (i);
}
