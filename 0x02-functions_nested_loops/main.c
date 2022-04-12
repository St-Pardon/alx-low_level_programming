#include <stdio.h>
#include "main.h"

/**
 * main - the entry point
 * Return: 0 when susseccful
 */

int main(void)
{
	int r;

	 r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
	return (0);
}
