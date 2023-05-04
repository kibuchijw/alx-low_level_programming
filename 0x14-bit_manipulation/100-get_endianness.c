#include "main.h"

/**
  * get_endianness - Checks endianness, returns 0, if big, 1 if little
  *
  * Return: 0, if big endian, 1 if little endian
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
