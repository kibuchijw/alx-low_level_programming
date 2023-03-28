#include "main.h"
#include <stdio.h>

/**
  * print_array - Prints n elements of integers array
  * @a: Array of integers
  * @n: Number of array elements to be printed
  */

void print_array(int *a, int n)
{

	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
