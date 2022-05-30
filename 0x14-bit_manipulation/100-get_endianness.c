#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: int
 */

int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
