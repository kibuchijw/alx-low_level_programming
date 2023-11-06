#include <stdio.h>

/**
  * main - Entry point
  *
  * Description:"print lowercase letters followed by a new line (except 'e'
  * and 'q'"
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (i != 'q' && i != 'e')
		putchar(i);
	}

	putchar('\n');
	return (0);
}
