#include "main.h"
#include <stdlib.h>

/**
  * create_array - Creates chars array
  * @size: Size of the array
  * @c: Char to fill array
  * Return: Pointer to the array, or NULL if it fails
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
