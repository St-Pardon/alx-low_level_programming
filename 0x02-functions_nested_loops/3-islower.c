#include "main.h"

/**
 * _islower - outputs the lower case letters
 * @c: parameter
 * Return: returns 0 or 1
 */

int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
