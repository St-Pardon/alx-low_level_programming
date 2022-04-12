#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - does something
 * @n: parameter
 */

void print_to_98(int n)
{
	/* finally allowed to use stdio */
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}
