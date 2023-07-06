#include "main.h"

/**
  * set_bit - Sets value of a bit to 1 at given index
  * @n: Pointer to the number to modify
  * @index: Index of bit to set, starting from 0
  *
  * Return: 1 if it works, or -1 if error occurs
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is within range of number of bits in *n*/
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n |= (1UL << index);

	return (1);
}
