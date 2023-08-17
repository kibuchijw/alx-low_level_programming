#include "lists.h"

/**
 * get_dnodeint_at_index - Returns nth node of a doubly linked list.
 * @head: Pointer to head node of the list.
 * @index: Index of the node, starting 0.
 *
 * Return: Pointer to nth node, or NULL if node doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}

	return (NULL); /* if node at index doesn't exist */
}
