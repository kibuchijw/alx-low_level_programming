#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint_t list
 *
 * @h: Pointer to the head node of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0; /* Number of nodes counter */

	while (h != NULL)
	{
		printf("%d\n", h->n);  /* print current node data */
		h = h->next; /* Move to next node */
		count++;
	}
	return (count);
}
