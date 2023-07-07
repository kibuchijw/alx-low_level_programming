#include "main.h"

/**
  * flip_bits - Returns number of bits needed from one number to other
  * @n: Unsigned long int
  * @m: Unsigned long int
  *
  * Return: Number of bits to flip to get from n to m
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff > 0)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return (count);
}
