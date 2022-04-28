#include "main.h"
int divisors(int n, int m);

/**
 * is_prime_number - prime
 * @n: param
 * Return: int
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisors(3, n));
	}
}

/**
 * divisors - checks prime
 * @n: param
 * @m: param
 * Return: 0 or 1
 */

int divisors(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divisors(n + 2, m));
	}
	else
	{
		return (1);
	}
}
