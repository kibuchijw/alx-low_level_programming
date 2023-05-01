#include "lists.h"

/**
  * insert_nodeint_at_index - Inserts a new node at a position in listint_t
  * @head: Pointer to pointer to the head of the list
  * @idx: Index of list where new node should be added (starts at 0)
  * @n: Data value to be stored in new node
  *
  * Return: Address of the new node, else NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev_node, *current_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	prev_node = NULL;
	current_node = *head;
	i = 0;

	while (current_node != NULL && i < idx)
	{
		prev_node = current_node;
		current_node = current_node->next;
		i++;
	}

	if (i != idx)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current_node;
	prev_node->next = new_node;

	return (new_node);
}
