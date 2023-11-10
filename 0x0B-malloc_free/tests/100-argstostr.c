#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * agstostr - Concatenates all arguments in the program
  * @ac: Number of arguments
  * @av: Array of strings
  *
  * Return: Pointer to new string, else NULL, if it fails
  */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}

	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac; i++)
	{
		strcpy(str + j, av[i]);
		j += strlen(av[i]);
		str[j++] = '\n';
	}
	str[j] = '\0';

	return (str);
}
