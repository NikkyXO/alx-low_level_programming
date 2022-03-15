#include <stdio.h>
#include "main.h"
/**
 * print_sign - is a function that prints the sign of a number
 * @n: n - an integer
 * Return: 1 if n is greater than 0, 0 if n is 0,
 * and -1 if n lis less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

