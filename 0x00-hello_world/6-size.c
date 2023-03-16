#include <stdio.h>

/**
  * main - Entry point
  *
  * Description:'This a C script that prints the size of various types'
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	printf("Size of a char: = %2d bytes \n", sizeof(char));
	printf("Size of an int: = %2d bytes \n", sizeof(short int));
	printf("Size of a long int: = %2d bytes \n", sizeof(long int));
	printf("Size of a long long int: = %2d bytes \n", sizeof(long double));
	printf("Size of a float: = %2d bytes \n", sizeof(float));
	return (0);
}
