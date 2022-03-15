#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - A function that prints the last digit of a number
 * @n: n is an integer
 * lastd: last digit of a number
 * Return: Always 0 if successful
 */
int print_last_digit(int n)
{
	int lastd = n % 10;

	if (n < 0)
		lastd = lastd * -1;

	_putchar(lastd + '0');

	return (lastd);
}

