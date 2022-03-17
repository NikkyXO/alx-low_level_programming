#include <stdio.h>
#include "main.c"
/**
 * print_most_numbers - A function that prints the numbers,
 * from 0 to 9, followed by a new line
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)

		if (c == '2' && c == '4')

			continue;

		_putchar(c + '0');

	_putchar('\n');

}

