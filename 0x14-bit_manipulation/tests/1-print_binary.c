#include "main.h"

/**
  * print_binary - Prints binary representation of unsigned long integer
  * @n: Unsigned long integer to be printed in binary
  *
  * Return: Binary representation of 'n'
  */
void print_binary(unsigned long int n)
{
	int i;

	if (n == 0)
	{
		_putchar ('0');
		return;
	}

	/* Find position of the highest bit in n*/
	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			break;
		}
	}
	/*Print each bit from left to right*/
	for (; i >= 0; i--)
	{
		_putchar((n >> i) & 1 ? '1' : '0');
	}
}
