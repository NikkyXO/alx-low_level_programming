#include <stdio.h>
#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic character
 * @c: c is an ascii character
 * Return: Always 0 Success
 */

int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
