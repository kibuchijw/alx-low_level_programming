#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>

/**
  * struct list_s - singly linked list
  * @str: String
  * @len: Length of string
  * @next: Pointer to the next node
  *
  * Description: The node structure of a singly linked list
  */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
