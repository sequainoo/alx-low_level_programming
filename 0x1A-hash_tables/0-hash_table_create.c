#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table of size size
 * @size: the size of the table
 * Returns: a pointer to the created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);
	*(array + size) = NULL;
	table->array = array;
	return (table);
}
