#include "main.h"

/**
  * print_alphabet - Entry point
  * Description:'Print the alphabet in lowercase'
  * Return: Always 0 (Success)
  */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
