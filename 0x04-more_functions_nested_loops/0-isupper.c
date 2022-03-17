#include <stdio.h>
#include "main.h"
/**
 * _isupper - is a function that checks for uppercase character
 * @c: c is the character
 * Return: 1 for success and 0 for failure
 *
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
