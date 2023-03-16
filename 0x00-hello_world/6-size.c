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
	char charType;
	int intType;
	int intLongType;
	int intLongx2Type;
	float floatType;

	printf("Size of a char: = %ld byte\(s\)\n", sizeof(charType));
	printf("Size of an int: = %ld  byte\(s\) \n", sizeof(intType));
	printf("Size of a long int: = %ld byte\(s\) \n", sizeof(intLongType));
	printf("Size of a long long int: = %ld byte\(s\) \n", sizeof(intLongx2Type));
	printf("Size of a float: = %ld byte\(s\) \n", sizeof(floatType));
	return (0);
}
