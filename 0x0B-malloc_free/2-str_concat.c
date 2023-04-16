#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * str_concat - Concatenates two strings
  * @s1: First string
  * @s2: Second string
  * Return: The concatenated string or NULL on failure
  */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len1 = 0, len2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;

	len2 = i + j;
	s = malloc((sizeof(char) * len2) + 1);

	if (s == NULL)
		return (NULL);
	j = 0;

	while (len1 < len2)
	{
		if (len1 <= i)
			s[len1] = s1[len1];
		if (len1 >= i)
		{
			s[len1] = s2[j];
			j++;
		}
		len1++;
	}
	s[len1] = '\0';
	return (s);
}

