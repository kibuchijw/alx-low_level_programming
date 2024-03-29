#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 * of integers using the Binary search algorithm.
 *
 * @array: A pointer to the first element of the array
 * to search in (sorted in ascending order).
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The index where the value is located,
 * or -1 if the value is not found or the array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, left, right, i;

	if (array == NULL)
		return (-1); /* Return -1 if the array is NULL */

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; ++i)
		{
			/* Printing the current subarray being searched */
			if (i != right)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
			return (mid); /* Return the index if the value is found */
		else if (array[mid] < value)
			left = mid + 1; /* Update the left pointer */
		else
			right = mid - 1; /* Update the right pointer */
	}

	return (-1); /* Return -1 if the value is not found */
}

