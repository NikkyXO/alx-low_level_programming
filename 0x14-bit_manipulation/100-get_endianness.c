#include "main.h"

/**
 * get_endianness - A function that checks endianess
 * Return: 0 if big endian, 1 if little endian
 *
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (i);
	return (0);
}
