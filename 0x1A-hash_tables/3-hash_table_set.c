#include "hash_tables.h"

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

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *head, *elem;
	unsigned long int index;
	char *k;

	if (key == NULL || strlen(key) == 0)
		return (0);
	k = _strcpy(key);

	index = hash_djb2((const unsigned char *)k) % ht->size;
	/* get the index of the key */
	head = ht->array[index];

	if (head == NULL)
	{
		node = malloc(sizeof(hash_node_t));
		if (node == NULL)
			return (0);

		node->key = k;
		node->value = _strcpy(value);
		node->next = NULL;
	}
	else
	{
		/* if key already exists update value */
		elem = head;
		while (elem != NULL)
		{
			if (elem->key == k)
			{
				elem->value = strcat(elem->value, value);
				return (1);
			}
			elem = elem->next;
		}
		/* if key doesnt exist already create node make it head */
		node = malloc(sizeof(hash_node_t));
		if (node == NULL)
			return (0);

		node->key = k;
		node->value = _strcpy(value);
		node->next = head;
		return (1);
	}
	return (0);
}
