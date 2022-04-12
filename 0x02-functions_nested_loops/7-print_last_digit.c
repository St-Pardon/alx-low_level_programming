#include "main.h"

/**
 * print_last_digit - outputs the last digit
 * @n: parameter
 * Return: something
 */

int print_last_digit(int n)
{
	int i = n % 10;

	if (n < 0)
		i *= -1;

	_putchar(i + '0');

	return (i);
}
