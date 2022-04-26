#include "main.h"
/**
 * _strstr - find str in str
 * @haystack: pointer param
 * @needle: pointer param
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *i = haystack, *j = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (i);
		}
		needle = j;
		i++;
		haystack = i;
	}
	return (0);
}
