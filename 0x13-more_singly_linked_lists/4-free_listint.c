#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: list head pram
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
