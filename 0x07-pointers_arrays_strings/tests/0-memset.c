#include "main.h"

/**
  * _memset - Fill first n bytes of memory area
  * @s: Pointer &n
  * @b: Constant byte
  * @n: Number of bytes
  * Return: Pointer to the memory are s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
		s[i] = b;
	return (s);
}
