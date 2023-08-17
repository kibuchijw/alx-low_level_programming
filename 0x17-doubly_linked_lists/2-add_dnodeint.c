#include "lists.h"

/**
 * add_dnodeint - Adds new node at beginnig of a doubly linked list
 * @head: Pointer to pointer to the head node
 * @n: Valuse to store in new node
 *
 * Return: Address of new element, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;


	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
