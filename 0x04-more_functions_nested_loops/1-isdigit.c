#include "main.h"

/**
 *  _isdigit - is a function that checks for a digit (0 through 9)
 *@c: c is a character
 *
 * Return: 1 if Success and 0 if otherwise
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
