#include "lists.h"

/**
 * dlistint_len - finds the length of a linked list
 * @h: the head of list
 *
 * Description: using loop to get length
 * Return: the length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length += 1;
		h = h->next;
	}
	return (length);
}
