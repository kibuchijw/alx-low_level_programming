#include "lists.h"

/**
  * reverse_listint - Reverses a listint_t list
  * @head: Pointer to a pointer to the first node of the list
  *
  * Return: Pointer to the first node of reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
