#include "hash_tables.h"

/**
 * key_index - gets the index of key
 * @key: the key
 * @size: the size of the table
 * Returns: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	index = hash_djb2(key) % size;
	return (index);
}
