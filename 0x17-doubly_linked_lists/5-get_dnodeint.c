#include "lists.h"

/**
 * get_dnodeint_at_index - finds the nth node of a dlist
 * @head: head of dlist
 * @index: the nth node
 *
 * Description: finds and returns node at position n
 * Return: the node if it exists and dlist is not empty
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count += 1;
	}
	return (NULL);
}
