#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: param list head
 * @index: param
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
