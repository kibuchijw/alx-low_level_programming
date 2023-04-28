#include "lists.h"

/**
  * list_len - Returns number of elements in a linked list
  * @h: Pointer to the head of the list
  *
  * Return: Number of nodes in the list
  */

size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
