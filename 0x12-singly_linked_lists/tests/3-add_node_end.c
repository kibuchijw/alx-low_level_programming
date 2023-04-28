#include "lists.h"

/**
  * add_node_end - Adds a new node at end of a list
  * @head: Pointer to the head of the list
  * @str: The string to add to the list
  *
  * Return: A pointer to a new element, else NULL
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp_node = *head;
	while (temp_node->next != NULL)
		temp_node = temp_node->next;

	temp_node->next = new_node;

	return (new_node);
}
