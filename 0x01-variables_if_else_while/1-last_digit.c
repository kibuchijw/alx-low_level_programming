#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: "Print out the last number of a randomly generated number"
  *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int x;
	int y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	x = n % 10;
	y = 0;

	if (x >= 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}
	else if (x <= 5)
	{
		printf("Last digit of %d is %d and is less than 6 and not %d\n", n, x, y);
	}
	else
	{
		printf("Last digit of %d is %d and is %d\n", n, x, y);
	}
	return (0);
}
