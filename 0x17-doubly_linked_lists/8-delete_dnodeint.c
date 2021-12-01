#include "lists.h"

/**
 * delete_dnodeont_at_index - deletes a node at an index
 * @head: points to a pointer to the head
 * @index: the index to search and delete
 * Return: 1 on success and -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = *head, *prev = NULL, *next = NULL;
	unsigned int count = 0;

	while (h != NULL)
	{
		if (count == index)
		{
			if (index == 0)
			{
				if (h->next == NULL)
				{
					free(h);
					return (1);
				}
				next = h->next;
				next->prev = NULL;
				*head = next;
				free(h);
				return (1);
			}
			if (h->next == NULL)
			{
				prev = h->prev;
				prev->next = NULL;
				free(h);
				return (1);
			}
			prev = h->prev;
			next = h->next;
			prev->next = next;
			next->prev = prev;
			free(h);
			return (1);
		}
		h = h->next;
		count += 1;
	}
	return (-1);
}
