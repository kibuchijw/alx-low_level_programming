#include "main.h"

/**
  * _islower - Entry point
  * @c: character being checked
  * Description:'check for lowercase character'
  * Return: 1 for lowercase and 0 for anything else
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
