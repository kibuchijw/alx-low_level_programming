#include "main.h"

/**
  * create_file - Create a new file
  * @filename: Name of the file to create
  * @text_content: Content to write to file
  *
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd, result, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		result = write(fd, text_content, len);
		if (result == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
