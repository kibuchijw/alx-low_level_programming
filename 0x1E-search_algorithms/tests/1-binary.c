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
	{
		return (-1); /* Return -1 if the array is NULL */
	}

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in subarray: ");
		for (i = left; i <= right; ++i)
		{
			/* Printing the current subarray being searched */
			printf("%d ", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
		{
			/* Return the index if the value is found */
			return (mid);
		}
		else if (array[mid] < value)
		{
			/* Update the left pointer */
			left = mid + 1;
		}
		else
		{
			/* Update the right pointer */
			right = mid - 1;
		}
	}

	return (-1); /* Return -1 if the value is not found */
}
