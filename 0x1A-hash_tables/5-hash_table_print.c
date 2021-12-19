#include "hash_tables.h"

/**
 * hash_table_print - print key/values of hash table in order
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node, **array;
	unsigned long int index;

	if (ht == NULL)
		return;
	
	index = 0;
	array = ht->array;

	putchar('{');
	while (index < ht->size)
	{
		node = array[index];
		if (node == NULL)
		{
			index += 1;
			continue;
		}
		print_node(node);
		if (index < ht->size - 1)
			printf(", ");
		index += 1;
	}
	puts("}");

}

void print_node(hash_node_t *node)
{
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->next;
	}
}
