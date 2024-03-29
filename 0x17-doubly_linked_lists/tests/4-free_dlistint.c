#include "lists.h"

/**
 * free_dlistint - Frees doubly linked list
 * @head: Pointer to head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
