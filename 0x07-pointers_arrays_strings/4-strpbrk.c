#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches for string
 * @s: poiter param
 * @accept: poiter param
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, c = 0;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				c++;
				break;
			}
		}
		if (c)
		{
			return (s);
		}
		else
			s++;
	}
	return (NULL);
}
