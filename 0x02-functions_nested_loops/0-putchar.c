#include <main.h>

/**
 * 0-putchar -A program that prints _putchar, followed by a new line
 *
 * Return: Always 0 Success
 *
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}

