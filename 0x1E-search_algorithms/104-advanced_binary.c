#include "search_algos.h"

/**
 * print_arr - Prints the contents of an array.
 * @arr: The source of the array to print.
 * @l: The left index of the array.
 * @r: The right index of the array.
 */

void print_arr(int *arr, size_t l, size_t r)
{
	size_t i;

	if (arr)
	{
		printf("Searching in array: ");
		for (i = l; i < l + (r - l + 1); i++)
			printf("%d%s", *(arr + i), i < l + (r - l) ? ", " : "\n");
	}
}

/**
 * binary_search_idx - Searches for value in a sorted array using \
 * a binary search.
 * @arr: The array to search in
 * @l: The left index of the array
 * @r: The right index of the array
 * @value: The value to search for.
 * Return: The first index of the value in the array, otherwise -1.
 */

int binary_search_idx(int *arr, size_t l, size_t r, int value)
{
	size_t b;

	if (!arr)
		return (-1);
	print_arr(arr, l, r);
	b = l + ((r - l) / 2);
	if (l == r)
		return (*(arr + b) == value ? (int)b : -1);
	if (value < *(arr + b))
	{
		return (binary_search_idx(arr, l, b, value));
	}
	else if (value == *(arr + b))
	{
		if ((b > 0) && (*(arr + b - 1) == value))
		{
			return (binary_search_idx(arr, l, b, value));
		}
		return ((int)b);
	}
	else
	{
		return (binary_search_idx(arr, b + 1, r, value));
	}
}

/**
 * advanced_binary - Searches for value in a sorted array using a binary search
 * @array: The array to search in
 * @size: The length of the array
 * @value: The value to search for
 * Return: The first index of the value in the array, otherwise -1.
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);
	else if ((size == 1) && (*array == value))
		return (0);
	return (binary_search_idx(array, 0, size - 1, value));
}
