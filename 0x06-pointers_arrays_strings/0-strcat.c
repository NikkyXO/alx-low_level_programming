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
	
	char *tmp = dest;
	int i;

	for (dest[i] = 0; dest[i] != '\0'; dest++)
		dest[i] = src[i];

	for (src[i] = 0; src[i] != '\0'; src++)
		*dest++ = *src++;

	dest = '\0';

	return (tmp);


}
