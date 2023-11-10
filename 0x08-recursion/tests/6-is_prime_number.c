#include "main.h"
#include <stdio.h>

int is_prime(int n, int i);
/**
  * is_prime_number - Returns prime number status
  * @n: Number to check if prime
  *
  * Return: integer
  */
int is_prime_number(int n)
{
	return (is_prime(n, 1));
}

/**
 * is_prime - Check whether number is prime
 * @n: Number to check
 * @i: Number of times to check
 *
 * Return: 1 if prime, else 0
 */
int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);

	return (is_prime(n, i + 1));
}
