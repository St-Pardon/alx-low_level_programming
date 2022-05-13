#include "function_pointers.h"

/**
 * int_index - searches array
 * @array: param
 * @size: param
 * @cmp: param
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j)
			{
				return (i);
			}
			else if (i + 1 == size && !j)
			{
				return (-1);
			}
		}
	}
	else
		return (-1);
	return (0);
}
