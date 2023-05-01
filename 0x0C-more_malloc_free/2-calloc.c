#include "main.h"
#include <stdlib.h>

/**
  * _calloc - Allocates memory and returns pointer to allocated memory
  * @nmemb: Number of elements to allocate memory
  * @size: Size of bytes of each element
  *
  * Return: Pointer to allocated memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);

	while (i < 1)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
