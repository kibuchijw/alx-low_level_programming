#include <stdio.h>

/**
  * main - Entry point
  *
  * Description:'Print lowercase alphabet letters in reverse'
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
