#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string
 * @len: unsign int for len
 * @next: link to next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

list_t *add_node_end(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str);
size_t print_list(const list_t *h);
void free_list(list_t *head);
size_t list_len(const list_t *h);


#endif
