#include "main.h"

/**
 * _strspn - prefix len
 * @s: poiter param
 * @accept: poiter param
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i, j, k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				k++;
			}
		}
		if (k == 0)
			break;
		k = 0;
	}
	return (len);
}
