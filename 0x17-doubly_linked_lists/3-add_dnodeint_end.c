#include "lists.h"

/**
 * add_dnodeint_end - adds new node to end of list
 * @head: pointer to a pointer to head
 * @n: the interger to add to end of list
 *
 * Description: new node is created for n and added to list end
 * Return: the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *h = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (!(*head))
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (h->next != NULL)
		h = h->next;
	h->next = new_node;
	new_node->prev = h;
	return (new_node);
}
