#include "main.h"
#include <stdlib.h>

/**
  * array_range - Creates an array of integers
  * @min: Minimum value
  * @max: Maximum value
  *
  * Return: Pointer to the newly created array
  */
int *array_range(int min, int max)
{
	int i, *arr;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= max  - min; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
