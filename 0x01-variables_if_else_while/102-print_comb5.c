#include <stdio.h>

/**
 * main - Entry point
 * Description : A function that prints all possible combinations
 *	of two two-digit numbers
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int tens1, ones1, tens2, ones2;

	for (tens1 = 0; tens1 <= 9; tens1++)
	{
		for (ones1 = 0; ones1 <= 9; ones1++)
		{
			for (tens2 = tens1; tens2 <= 9; tens2++)
			{
				for (ones2 = (tens1 == tens2) ? ones1 + 1 : 0; ones2 <= 9; ones2++)
				{
					/* Convert tens digit to a character */
					putchar(tens1 + '0');
					/* convert ones digit to a character */
					putchar(ones1 + '0');
					/* Separate the two */
					putchar(' ');
					/* Convert tens digit of the second number */
					putchar(tens2 + '0');
					/* Convert ones digit of the second number */
					putchar(ones2 + '0');

					if (!(tens1 == 9 && ones1 == 9 && tens2 == 9 && ones2 == 9))
					{
						/* Separate combinationd with a comma */
						putchar(',');
						/* Add space after comma */
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
