#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);
/**
  * _sqrt_recursion - Get the natural sqaure root of a number
  * @n: Number to get sqaure root of
  * Return: Square root of n
  */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt  - Square root calculator
  * @n: Number to calculate square root of
  * @i: Number of iterations
  *
  * Return: Square root of n
  */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
