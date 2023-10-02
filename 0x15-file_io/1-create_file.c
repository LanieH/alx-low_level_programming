#include "main.h"

/**
 * create_file - Makes a new file.
 * @filename: Pointer to the name the file to make.
 * @text_content: Pointer to a string to write to the file.
 *
 * Return: --1 for failure, -1 if otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_WRONGLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		w = write(fd, text_content, len);
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
