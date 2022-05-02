#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: the string to be written in the file
 * Return: 1 on Success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, status, i;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		;

		status = write(fd, text_content, i);
		if (status == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
