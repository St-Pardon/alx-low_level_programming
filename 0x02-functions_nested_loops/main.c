#include <stdio.h>
#include "main.h"

/**
 * main - the entry point
 * Return: 0 when susseccful
 */

int main()
{
	int r;
	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
