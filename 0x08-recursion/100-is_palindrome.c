#include "main.h"

/**
  * str-len_rec - Returns string length recursively
  * @s: The string
  *
  * Return: Length of a string
  */

int str_len_rec(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + str_len_rec(s + 1));
}

/**
  * comparer - Compares each character in the string
  * @s: The string
  * @n1: The smallest iterator
  * @n2: The largest iterator
  *
  * Return: Always 0 (Success)
  */

int comparer(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparer(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
  * is_palindrome - Checks if a string is a palindrome
  * @s: The string to check
  *
  * Return: 1 if a palindrome, else 0
  */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparer(s, 0, str_len_rec(s) - 1));
}
