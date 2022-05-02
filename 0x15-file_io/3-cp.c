#include "main.h"

#define MAXSIZE 1024

/**
 * main - creates the copy of a content of a file
 * @ac: arguments counts
 * @av: arguments as strings
 * Return: 0
 */

int main(int ac, char *av[])
{
	int fd_output, fd_input, istatus, ostatus;

	char buf[MAXSIZE];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from  file_to\n"), exit(97);

	fd_output = open(av[1], O_RDONLY);
	if (fd_output == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd_input = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd_input == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	do {
		ostatus = read(fd_output, buf, MAXSIZE);
		if (ostatus == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (ostatus > 0)
		{
			istatus = write(fd_output, buf, (ssize_t) ostatus);
			if (istatus == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]), exit(99);
		}
	} while (ostatus > 0);

	ostatus = close(fd_output);
	if (ostatus == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_output), exit(100);

	istatus = close(fd_input);
	if (istatus == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_input), exit(100);
	return (0);
}
