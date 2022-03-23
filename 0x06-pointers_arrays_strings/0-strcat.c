#include "main.h"
#include <stdio.h>
/**
 * _strcat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * Return: A pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s = 0;

	while (*dest[d] != '\0')

		dest[d]++;

	while (*src[s] != '\0')

		dest[d]++ = src[s];

	*dest = '\0';


	return (*dest);

}
