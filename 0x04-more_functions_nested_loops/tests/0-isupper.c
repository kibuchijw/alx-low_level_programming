#include "main.h"

/**
  * _isupper - Checks if a letter is uppercase
  * @x: Number to be checked
  * Return: 1 for upper letter, 0 for anyhting else
  */

int _isupper(int x)
{

	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
