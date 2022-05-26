#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: param
 * Return: num of node
 */

size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}

	return (n_nodes);
}
