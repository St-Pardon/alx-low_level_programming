#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: Param
 * Return: A pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table != NULL)
	{
		table->size = size;
		table->array = malloc(sizeof(hash_node_t *) * size);
		if (table->array != NULL)
		{
			for (i = 0; i < size; i++)
				table->array[i] = NULL;
		}
	}
	return (table);
}
