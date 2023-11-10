#include "main.h"
#include <stdio.h>

/**
  * main - Emtry point
  * @argc: Argument counter
  * @argv: Argument vector
  * Return: Always 0 (Success)
  */

int main(int argc, char **argv)
{
	int i;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
