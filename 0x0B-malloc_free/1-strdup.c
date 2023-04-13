#include "main.h"
#include <stdio.h>

/**
  * _strdup -  Points to a newly allocated space in memory
  * @str: String to be dealt with
  * Return: NULL if str is NULL or a pointer to duplicated string
  */

char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}
