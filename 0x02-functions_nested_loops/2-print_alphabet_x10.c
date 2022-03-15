#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - A function that prints 10 times the alphabet,
 * in lower case followed by
 * a new line
 *
 * Return: Always 0 Success
 */
void print_alphabet_x10(void)
{
	char alp = 'a';
	int round = 0;

	while (round < 10)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');

		round++;
	}
}
