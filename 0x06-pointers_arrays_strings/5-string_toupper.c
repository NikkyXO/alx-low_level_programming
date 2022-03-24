#include "main.h"

/**
 * string_toupper - a function changes all lowercase letters of a
 * string to uppercase.
 * @s: An input string
 * Return: a char pointer to the converted string
 */

char *string_toupper(char *s)
{
		char *start = s;

		while (*s)
		{
			if (*s >= 'a' && *s <= 'z')
				*s -= 32;
			s++;
		}
		return (start);

}
