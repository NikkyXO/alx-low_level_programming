#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: 0
 */

void print_numbers(void)
{
	int m;

	for (m = '0'; m <= '9'; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
