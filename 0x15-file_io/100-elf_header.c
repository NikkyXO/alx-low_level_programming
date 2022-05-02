#include "main.h"

#define MAXSIZE 1024
#define SE STDERR_FILENO

/**
 * main - creates the copy bash script
 * @ac: argument count
 * @av: arguments as strings
 * Return: 0
 */
int main(int ac, char *av[])
{
	int fd_input, fd_output, istatus, ostatus;
	char buf[MAXSIZE];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
		dprintf(SE, "Usage: cp file_from  file_to\n"), exit(97);

	fd_output = open(av[1], O_RDONLY);
	if (fd_output == -1)
		dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd_input = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd_input == -1)
		dprintf(SE, "Error: cant't write to %s\n", av[2]), exit(99);

	do {
		ostatus = read(fd_output, buf, MAXSIZE);
		if (ostatus == -1)
			dprintf(SE, "Error: Can't read from  file %s\n", av[1]), exit(98);
		if (ostatus > 0)
		{
			istatus = write(fd_input, buf, (ssize_t) ostatus);
			if (istatus == -1)
				dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	} while (ostatus > 0);
	ostatus = close(fd_output);
	if (ostatus == -1)
		dprintf(SE, "Error: Can't close fd %d", fd_output), exit(100);

	istatus = close(fd_input);
	if (istatus == -1)
		dprintf(SE, "Error: Can't close fd %d\n", fd_input), exit(100);

	return (0);
}
