#include "search_algos.h"

/**
 * print_arr - the funct will print contents of an array.
 * @array: param
 * @l: param
 * @r: param
 */

void print_arr(int *array, size_t l, size_t r)
{
	size_t i;

	if (array)
	{
		printf("Searching in array: ");
		for (i = l; i < l + (r - l + 1); i++)
			printf("%d%s", *(array + i), i < l + (r - l) ? ", " : "\n");
	}
}

/**
 * binary_search_idx - Searches for a value in a sorted arr
 * @array: arr to search in
 * @l: left index
 * @r: right index
 * @value: The value to look for.
 *
 * Return: The first index of the value in the array, otherwise -1.
 */

int binary_search_idx(int *array, size_t l, size_t r, int value)
{
	size_t m;

	if (!array)
		return (-1);
	print_arr(array, l, r);
	m = l + ((r - l) / 2);
	if (l == r)
		return (*(array + m) == value ? (int)m : -1);
	if (value < *(array + m))
		return (binary_search_idx(array, l, m - 1, value));
	else if (value == *(array + m))
		return ((int)m);
	else
		return (binary_search_idx(array, m + 1, r, value));
}

/**
 * binary_search -  searches for a value in a sorted array of integers\
 using the Binary search.
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: The value to look for.
 *
 * Return: The index of the value in the array, otherwise -1.
 */

int binary_search(int *array, size_t size, int value)
{
	return (binary_search_idx(array, 0, size - 1, value));
}
