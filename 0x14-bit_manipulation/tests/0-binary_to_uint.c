#include "main.h"

/**
  * binary_to_uint - Converts binary number to an unsigned int
  * @b: Pointer to string of 0 and 1 chars
  *
  * Return: Converted number or 0 if
  *there is one or more chars in string b that is not 0 or 1
  *b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = result << 1;
		if (b[i] == '1')
			result = result | 1;
	}

	return (result);
}