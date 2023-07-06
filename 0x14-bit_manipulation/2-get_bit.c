#include "main.h"

/**
  * get_bit - Returns value of a bit at a given index
  * @n: Number to get bit from
  * @index: Index of the bit to get, starting 0
  *
  * Return: Value of the bit index, or -1 if error occured
  */
int get_bit(unsigned long int n, unsigned int index)
{
	/*Check if index is within range of number of bits in n*/
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
