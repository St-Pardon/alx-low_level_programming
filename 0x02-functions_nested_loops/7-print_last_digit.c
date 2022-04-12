#include "main.h"

/**
 * print_last_digit - outputs the last digit
 * @n: parameter
 * Return: something
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	n %= 10;
	_putchar(n + '0');

	return (n);
}
