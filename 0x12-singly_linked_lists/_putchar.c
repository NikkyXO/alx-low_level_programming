#include <unistd.h>

/**
 * _putchar - writes a character c to standard output.
 *
 * @c: character to print
 * Return: 0 on success, -1 on failure
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
