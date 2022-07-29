#include "hash_tables.h"

/**
 * hash_table_print - Prints the elements in a given hash table.
 * @ht: The source hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long i;
	char first = 1;

	if ((ht != NULL) && (ht->array != NULL))
	{
		printf("{");
		fflush(stdout);
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				printf("%s'%s': '%s'", first ? "" : ", ", node->key, node->value);
				fflush(stdout);
				first = 0;
				node = node->next;
			}
		}
		printf("}\n");
		fflush(stdout);
	}
}
