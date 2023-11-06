#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possibel different combinations of two digits
 *
 * Return: 0 Success Always
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			/* Convert integers to characters */
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
