#include <stdio.h>
#include "main.h"

/**
 * 1-alphabet.c - A function that prints the alphabet, in lower case followed
 * by a new line:
 *
 * Return: Always 0 Success
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

