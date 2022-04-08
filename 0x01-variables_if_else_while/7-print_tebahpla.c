#include <stdio.h>

/**
 * main - containing funct
 * Return: 0 when successfull
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
