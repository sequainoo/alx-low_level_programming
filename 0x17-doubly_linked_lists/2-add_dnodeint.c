#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning of a list
 * @head: a pointer to a pointer to head node
 * Return: a pointer to the head which is the new node added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if ((*head) == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}
	(*head)->prev = new_node;
	(*head) = new_node;
	return (new_node);
}
