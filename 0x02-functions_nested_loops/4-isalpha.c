#include "main.h"

/**
 * _isalpha - outputs the lower case letters
 * @c: parameter
 * Return: returns 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 97 && c < 123) || (c >= 65 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
