#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * _calloc - Allocates memory and returns pointer to allocated memory
  * @nmemb: Number of elements to allocate memory
  * @size: Size of bytes of each element
  *
  * Return: Pointer to allocated memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
