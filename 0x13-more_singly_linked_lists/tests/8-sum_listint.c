#include "lists.h"

/**
  * sum_listint - Returns sum of all data (n) of listint_t list
  * @head: Pointer to head of the list
  *
  * Return: Sum of all the data in the list
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node;

	current_node = head;
	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}
