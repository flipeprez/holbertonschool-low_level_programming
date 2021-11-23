#include "main.h"


/**
 * create_file - the function create a file.
 * @filename: name of file.
 * @text_content: string for file.
 * Return: 1 on success -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, s;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_EXCL | O_WRONLY, 0600);

		if (errno == EEXIST)
		{
			fd = open(filename, O_WRONLY | O_TRUNC);
			if (fd == -1)
				return (-1);
		}
		for (s = 0; text_content[s] != '\0'; s++)
		{
			if (write(fd, &text_content[s], 1) == -1)
				return (-1);
		}
	close(fd);
	return (1);
}
