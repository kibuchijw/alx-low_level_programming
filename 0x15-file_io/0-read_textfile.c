#include "main.h"

/**
  * read_textfile - Reads the text file
  * @filename: Name of the text file to read
  * @letters: Letters to read in the text file selected
  *
  * Return: Actual number of letters it could read and print, else 0
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, result;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	result = read(fd, buffer, letters);
	if (result == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	buffer[result] = '\0';

	if (write(STDOUT_FILENO, buffer, result) != result)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (result);
}
