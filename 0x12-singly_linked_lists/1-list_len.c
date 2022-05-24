#include "lists.h"

/**
 * list_len - len of list.
 * @h: param list.
 * Return: len struct
 */

size_t list_len(const list_t *h)
{
	size_t l_node;

	l_node = 0;
	while (h != NULL)
	{
		h = h->next;
		l_node++;
	}
	return (l_node);
}
