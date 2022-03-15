#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - A function that prints the alphabet, in lower case followed
 * by a new line:
 *
 * Return: No return value
 */


void print_alphabet(void)
{
		char alp = 'a';

		for (; alp <= 'z'; alp++)

		{
			_putchar(alp);


		}
		_putchar('\n');

}

