#include "lists.h"

/**
 * add_dnodeint_end - Adds new node at the end of doubly linked list
 * @head: Pointer to pointer to head node of list
 * @n: Value to be stored in new node
 *
 * Return: Address of new element, or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	if (head == NULL)
		return (NULL);

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	new_node->prev = current;
	current->next = new_node;

	return (new_node);
}
