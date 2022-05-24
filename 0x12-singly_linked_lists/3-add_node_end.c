#include "lists.h"

/**
 * add_node_end - adds new node
 * @head: param
 * @str: param
 * Return: struct
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *tmp;
	size_t n;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	n_node->len = n;
	n_node->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = n_node;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = n_node;
	}

	return (*head);
}
