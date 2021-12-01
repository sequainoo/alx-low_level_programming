#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: a pointer to the head of list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next = NULL;

	while (head != NULL)
	{
		next = head->next;
		head->next = NULL;
		head->prev = NULL;
		free(head);
		head = next;
	}
}
