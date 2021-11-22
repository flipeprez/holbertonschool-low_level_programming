#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - read a function and prints it to the POSIX.
 * @filename:pointer value.
 * @letters: size of the string.
 * Return:text file.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int rl;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char *) * letters);

	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0600);

	if (fd == -1)
		return (0);

	rl = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, rl);

	close(fd);
	free(buf);
	return (rl);
}
