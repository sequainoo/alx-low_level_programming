#include "lists.h"

/**
 * @h: points to a pointer to the head
 * @idx: inde to insert to
 * @n: the value to insert
 * Return: the created node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *head = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;

	while (head != NULL)
	{
		if (count == idx)
		{
			new_node->next = head;
			new_node->prev = head->prev;
			if (head->prev != NULL)
				head->prev->next = new_node;
			head->prev = new_node;
			*h = new_node;
			return (new_node);
		}
		count += 1;
		head = head->next;
	}
	return (NULL);
}
