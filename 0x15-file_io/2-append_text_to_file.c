#include "main.h"

/**
 * append_text_to_file - append text at the end of a file.
 * @filename: ponter file name.
 * @text_content: string to appends.
 * Return: 1 if exists -1 if don't exists.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, s;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)
		return (-1);

	for (s = 0; text_content[s] != '\0'; s++)
	{
		if (write(fd, &text_content[s], 1) == 1)
			return (1);
	}
	close(fd);
	return (-1);
}
