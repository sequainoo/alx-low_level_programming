#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table
 * @key: key
 * @value: value
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *head, *elem;
	unsigned long int index;
	char *k;

	if (ht->array == NULL)
		return (0);
	if (key == NULL || strlen(key) == 0)
		return (0);
	k = _strcpy(key);
	index = hash_djb2((const unsigned char *)k) % ht->size;
	head = ht->array[index], elem = head;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = k;
	node->value = _strcpy(value);
	if (head == NULL)
	{
		node->next = NULL;
		ht->array[index] = node;
		return (1);
	}
	else
	{
		while (elem != NULL)
		{
			if (elem->key == k)
			{
				elem->value = strcat(elem->value, value);
				free(node);
				return (1);
			}
			elem = elem->next;
		}
		node->next = head;
		ht->array[index] = node;
		return (1);
	}
	return (0);
}

/**
 * _strcpy - copies a string
 * @str: str to copy
 * Return: char*
 */
char *_strcpy(const char *str)
{
	char *key;
	size_t i;

	key = malloc(sizeof(str));
	if (key == NULL)
		return (0);

	i = 0;
	while (i < strlen(str))
	{
		key[i] = str[i];
		i += 1;
	}
	key[i] = '\0';

	return (key);
}
