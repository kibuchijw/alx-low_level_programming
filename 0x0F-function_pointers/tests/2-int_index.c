#include "function_pointers.h"

/**
  * int_index - Searches for an integer
  * @array: Array in which to search
  * @size: Number of elements in the array
  * @cmp:  Function pointer to compare values
  *
  *Return: -1 if no element matches/size is <=0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
