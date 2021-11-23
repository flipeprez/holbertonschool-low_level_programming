#include "main.h"

int of(char *f_from, char *f_to);
int read_files(int from_fd, int to_fd, char *f_from, char *f_to);

/**
 * main - main function.
 *@argc: counter arg.
 *@argv: vector arg.
 *Return: 0.
 */

int main(int argc, char **argv)
{
	char *f_from;
	char *f_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_from = argv[1];
	f_to = argv[2];

	of(f_from, f_to);
	exit(0);
	return (0);
}
/**
 * of - Opens the files.
 * @f_from: name of the file..
 * @f_to: name of the file.
 * Return: 0.
 */

int of(char *f_from, char *f_to)
{
	int from_fd, to_fd;

	from_fd = open(f_from, O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_from);
		exit(98);
	}
	to_fd = open(f_to, O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (to_fd == -1)
	{

		to_fd = open(f_to, O_WRONLY | O_TRUNC);
		if (to_fd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", f_to);
			exit(99);
		}
	}
	read_files(from_fd, to_fd, f_from, f_to);
	if (close(from_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
		exit(100);
	}
	if (close(to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
		exit(100);
	}
	return (0);
}

/**
 *  * read_files - Reads the file FROM_FILE.
 *   * @from_fd: File descriptor for FROM_FILE.
 *    * @to_fd: File descriptor for TO_FILE.
 *     * @f_from: Name of the file FILE_FROM.
 *      * @f_to: Name of the file FILE_TO.
 *       * Return: Always zero. Exit 98.
 *        */
int read_files(int from_fd, int to_fd, char *f_from, char *f_to)
{
	return (0);
}
