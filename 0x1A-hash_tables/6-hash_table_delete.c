#include "hash_tables.h"

void free_node(hash_node_t *node)
{
	if (node == NULL)
		return;
	
	free_node(node->next);
	free(node->key);
	free(node->value);
	free(node);
}

void free_array(hash_node_t **array, unsigned long int size)
{
	if (array == NULL)
		return;
	
	if (size == 1)
	{
		if (array[size-1])
			free_node(array[size - 1]);
		return;
	}
	free_array(array, size - 1);
	if (array[size - 1])
	{
		free_node(array[size - 1]);
	}
	
}

/**
 * hash_table_delete - free and delete hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	free_array(ht->array, ht->size);
	free(ht->array);
	free(ht);
}
