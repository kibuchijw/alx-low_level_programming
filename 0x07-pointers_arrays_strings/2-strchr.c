#include "main.h"
#include <stdio.h>

/**
  * _strchr - Entry point
  * @s: String
  * @c: Character in the string
  *Return: Character c or NULL
  */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
