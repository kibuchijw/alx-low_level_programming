#include "lists.h"

/**
 * sum_dlistint - Returns sum of all data values in a doubly linked list
 * @head: Pointer to head node
 *
 * Return: Sum of all data values, or 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
