#include "lists.h"

/**
  * pop_listint - Deletes head node of a listint_t list,
  * and returns head node's data (n)
  * @head: Pointer to a pointer to head of the list
  *
  * Return: The head node's data (n), or 0 if list is empty
  */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *current_node;

	if (*head == NULL)
		return (0);

	current_node = *head;
	data = current_node->n;
	*head = (*head)->next;
	free(current_node);

	return (data);
}
