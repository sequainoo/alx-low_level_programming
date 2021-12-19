#include "hash_tables.h"

/**
 * hash_table_get - given key, get value
 * @ht: hash table
 * @key: key
 * Return: value; or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
    hash_node_t *node;
    char *k = _strcpy(key);

    index = hash_djb2((const unsigned char*)k) % ht->size;
    node = ht->array[index];

    if (node == NULL)
        return (NULL);
    
    while (node && strcmp(node->key, k) != 0)
    {
        node = node->next;
    }
    if (node)
    {
        return (node->value);
    }
    else
        return (NULL);
}
