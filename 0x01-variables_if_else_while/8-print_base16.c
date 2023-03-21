#include <stdio.h>

/**
  * main - Entry point
  *
  * Description:'Print all base 16 numbers in lowercase'
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;
	int a;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
