#include "lists.h"

/**
  * free_listint - Frees a listint_t list
  * @head: Pointer to head of the list
  *
  * Return: Void
  */
void free_listint(listint_t *head)
{
	listint_t *current_node = NULL;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
