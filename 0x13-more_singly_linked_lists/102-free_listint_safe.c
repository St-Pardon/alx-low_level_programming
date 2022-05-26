#include "lists.h"

/**
 * free_list2 - frees a linked list
 * @head: list head param
 */

void free_list2(listp_t **head)
{
	listp_t *temp, *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: param list head
 * Return: size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t n_nodes = 0;
	listp_t *head_ptr, *new, *add;
	listint_t *curr;

	head_ptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = head_ptr;
		head_ptr = new;

		add = head_ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_list2(&head_ptr);
				return (n_nodes);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		n_nodes++;
	}

	*h = NULL;
	free_list2(&head_ptr);
	return (n_nodes);
}
