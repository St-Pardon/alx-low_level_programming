#include "function_pointers.h"

/**
 * array_iterator - exe funct param in arr
 * @array: param pointer
 * @size: param
 * @action: funct param
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
