#include "main.h"
/**
 * rot13 - encodes string
 * @str: input string.
 * Return: pointer
 */

char *rot13(char *str)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	/*Rot13 add 1 to char, reason for starting with n*/
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(str + count) == alphabet[i])
			{
				*(str + count) = rot13[i];
				break;
			}
		}
		count++;
	}

	return (str);
}
