#include "main.h"

/**
 * print_times_table - print multiplication table
 * @n: paramenter
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;

				if (j == 0)
					_putchar('0');
				else if (k < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k % 10 + '0');
				}
				else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k / 10) % 10 + '0');
					_putchar(k % 10 + '0');
				}
				else if (k > 99 && k < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(k / 100 + '0');
					_putchar((k / 10) % 10 + '0');
					_putchar(k % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
