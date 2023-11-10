#include "main.h"

/**
  * _print_rev_recursion  - Print a string in reverse
  * @s: String to be printed in reverse
  * Return: Always 0 (Success)
  */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
