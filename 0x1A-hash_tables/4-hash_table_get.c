#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value of an element with key in a hash table.
 * @ht: The hash table to search.
 * @key: The element's key.
 * Return: The value of the element associated with key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long idx;
	hash_node_t *node = NULL;

	if ((ht != NULL) && (ht->array != NULL)
		&& (key != NULL) && (strlen(key) > 0))
	{
		idx = key_index((unsigned char *)key, ht->size);
		node = ht->array[idx];
		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
				return (node->value);
			node = node->next;
		}
	}
	return (NULL);
}
