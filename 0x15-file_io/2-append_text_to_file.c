#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: File name.
 * @text_content: String added to the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	bytes_written = write(fd, text_content, strlen(text_content));

	close(fd);

	if (bytes_written == -1)
		return (-1);

	return (1);
}
