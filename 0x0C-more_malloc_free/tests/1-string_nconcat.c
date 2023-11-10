#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - Concatenates two strings
  * @s1: Newly allocated space in memory contents
  * @s2: String
  * @n: Checks string length
  * Return: NULL, if function fails, else return string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[k])
		k++;

	if (n >= k)
		l = i + k;
	else
		l = i + n;

	str = malloc(sizeof(char) * (l + 1));
	if (str == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		str[j] = s1[j];

	for (k = 0; k < n && s2[k]; k++, j++)
		str[j] = s2[k];

	str[j] = '\0';
	return (str);
}
