#include "main.h"

/**
  * factorial - Gives the factorial of a number
  * @n: The number to give a factorial of
  * Return: The factorial of the number
  */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
