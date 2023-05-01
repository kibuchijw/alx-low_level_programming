#include "lists.h"

/**
  * free_listint2 - Frees a listint_t list and sets the head pointer to NULL
  * @head: Pointer to a pointer to head of the list
  *
  * Return: Void
  */
void free_listint2(listint_t **head)
{
	listint_t *current_node = NULL;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
}
