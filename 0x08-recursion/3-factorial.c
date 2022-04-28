#include "main.h"

/**
 * factorial - factorial
 * @n: param
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (n);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
