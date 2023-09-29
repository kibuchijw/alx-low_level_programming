#include <unistd.h>
#include <string.h>

/**
 * main - Entry point of the program
 * Description: Program that prints a message as is, to STDERR
 *
 * Return: Nothing
 */
int main(void)
{
	const char *message = 
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	/* Message length */
	size_t len = strlen(message);

	/* Write to STDERR (file descriptor 2) */
	write(2, message, len);

	return (1);
}
