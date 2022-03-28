#include "main.h"
#include <stdio.h>

/**
  * _strchr - locates a character in a string.
  *@s: string
  *@c: character to search
  *Return: a pointer to the first occurrent of string or NULL,
  *if not found
  */

char *_strchr(char *s, char c)

{
	int i = 0;

	while (*(s + i) != '\0')
	{

		if (*(s + i) == c)

			return (s + i);
		i++;
	}

	if (c == '\0')

		return (s + i);

	return (NULL);

}


