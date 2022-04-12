#include "main.h"

/**
 * times_table - multiplication on 9
 */

void times_table(void)
{
	int i, j, k, l, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			l = k / 10;
			m = k % 10;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (k < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(l + '0');
				_putchar(m + '0');

			}
		}
	_putchar('\n');
	}
}
