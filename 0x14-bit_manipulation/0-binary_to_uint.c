#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: string
 * Return: the length of the string
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * power - calculates exponent
 * @base: base number
 * @exp: exponent number
 * Return: result(int)
 */

int power(int base, int exp)
{
	int i, num;

	num = 1;

	for (i = 0; i < exp; ++i)
		num *= base;

	return (num);
}
/**
 * binary_to_uint -  calculates binary number to unsigned int
 * @b: binary
 * Return: unsigned int
 *
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;

	int i, len = 0;

	if (b == NULL)
		return (total);

	len = _strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		total += (b[i] - '0') * power(2, len - i - 1);

	}
	return (total);
}
