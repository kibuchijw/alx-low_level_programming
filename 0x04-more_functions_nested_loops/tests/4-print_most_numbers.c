#include "main.h"

/**
  * print_most_numbers - Print numbers 0 - 9
  * Description:'prints all numbers except 2 and 4
  * Return: Numbers from 0 - 9, except 2 and 4
  */

void print_most_numbers(void)
{

	int n = 0;

	for (; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		else
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
