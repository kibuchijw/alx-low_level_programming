#include "main.h"

/**
  * append_text_to_file - Appends text at end of a file
  * @filename: Name of file to append text to
  * @text_content: Text to append at end of a file
  *
  * Return: 1 on success, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, new_bytes = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[new_bytes])
			new_bytes++;

		if (write(fd, text_content, new_bytes) == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
