#include "main.h"

/**
  * set_bit - Sets value of a bit to 1 at a given index
  * @n: Pointer to number whose bits will be manipulated
  * @index: Index of the bit to set, starts at 0
  *
  * Return: 1 if it works, else -1 where error occurs
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n |= (1UL << index);

	return (1);
}
