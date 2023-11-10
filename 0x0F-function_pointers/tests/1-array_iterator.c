#include "function_pointers.h"

/**
  * array_iterator - Iterates over given array
  * @array: Array to iterate
  * @size: Size of array
  * @action: Action to iterate array
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
