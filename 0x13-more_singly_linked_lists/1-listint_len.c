#include "lists.h"

/**
 * listint_len - returns num of elemet in linked list
 * @h: param
 * Return: nums of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
