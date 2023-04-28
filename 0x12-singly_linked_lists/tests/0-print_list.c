#include "lists.h"

/**
  * print_list - Prints all elements in list_t list
  * @h: Pointer to the head of list
  *
  * Return: Number of nodes in the list
  */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		node_count++;
		h = h->next;
	}

	return (node_count);
}
