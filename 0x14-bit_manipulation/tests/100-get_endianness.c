#include "main.h"

/**
  * get_endianness -  Determines endianness of a system
  *
  * Return: 1 for little endian and 0 for big endian systems
  */
int get_endianness(void)
{
	int num = 1;
	char *ptr = (char *)&num;

	if (*ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
