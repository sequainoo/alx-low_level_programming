#include "lists.h"

/**
 * print_dlistint - print aitems in a doubly linked list
 * @h: head of list
 *
 * Description: prints and returns
 * Return: the number of items in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
