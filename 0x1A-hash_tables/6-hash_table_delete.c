#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a given hash table.
 * @ht: The source hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node = NULL, *tmp = NULL;
	unsigned long i;

	if (ht != NULL)
	{
		if (ht->array != NULL)
		{
			for (i = 0; i < ht->size; i++)
			{
				node = ht->array[i];
				while (node != NULL)
				{
					tmp = node->next;
					if (node->key != NULL)
						free(node->key);
					if (node->value != NULL)
						free(node->value);
					free(node);
					node = tmp;
				}
			}
			if (ht->array != NULL)
				free(ht->array);
		}
		free(ht);
		ht = NULL;
	}
}
